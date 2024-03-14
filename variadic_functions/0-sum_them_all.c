#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters.
 * @n: the number of parameters (excluding @n).
 * ...: A variable number of parameters to sum.
 *
 * Return: The sum of all parameters.
 *         If n is 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list args;

if (n == 0)
return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

return (sum);
}
