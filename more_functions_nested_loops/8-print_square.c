#include "main.h"
/**
 * print_square- prints a square
 * @size: size of the square
 */
void print_square(int size)
{
	int t, o;

	if (size > 0)
	{
		for (t = 0; t < size; t++)
		{
			for (o = 0; o < size; o++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
