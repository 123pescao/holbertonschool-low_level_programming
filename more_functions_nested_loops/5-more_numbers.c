#include "main.h"
/**
 *more_numbers- Prints 10 times the numbers, from 0-14, followed by new line.
 */
void more_numbers(void)
{
	int c, b;

	for (c = 0; c <= 9; c++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}

