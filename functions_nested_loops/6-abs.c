#include "main.h"
/**
 *_abs - Computes the absolute value of an integer.
 *@n: number being computed.
 *
 * Return: The absolute value.
 */
int _abs(int n)
{
	if (n > 0)
	{
		int abs_value;
		
		abs_value = n * -1;
		return (abs_value);
	}
		return (n);
}
