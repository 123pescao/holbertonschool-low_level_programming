#include "main.h"
/**
 * _sqrt_recursion- calculates the sqrt of a number using recursion
 * @n: the integer
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	return (findsq(n, x));
}
/**
 * sqrt2- Makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion- returns the natural square root of n
 * @n: Number integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
