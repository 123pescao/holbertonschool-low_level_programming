#include "main.h"
/**
 *print_sign- Prints the sign of a number.
 *@n: character to be checked
 * Return: 1 if n > 0, 0 if n is zero or -1 if n < 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('_');
	return (-1);
	}
}
