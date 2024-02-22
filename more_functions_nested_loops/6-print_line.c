#include "main.h"
/**
 * print_line- Draws a straight line in terminal.
 * @n: number of times
 *
 */
void print_line(int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
		_putchar('\n');
}
