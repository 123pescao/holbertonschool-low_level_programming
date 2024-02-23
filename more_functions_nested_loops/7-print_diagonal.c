#include "main.h"
/**
 *print_diagonal- draws a diagonal line on the terminal.
 *@n: Number of times the character is printed.
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		if (n > 0)
		{
			for (b = 0; b < n; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (a < n - 1)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
