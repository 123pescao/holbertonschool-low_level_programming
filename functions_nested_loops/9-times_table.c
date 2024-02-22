#include "main.h"
/**
 * times_table- Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			prod = num * mult;
			if (mult == 0)
			{
				_putchar('0' + prod);
			}
			else if (prod < 10)
			{
				_putchar(',');
				_putchar('');
				_putchar('');
				_putchar('0' + prod);
			}
			else
			{
				_putchar(',');
				_putchar('');
				_putchar('0' + prod / 10);
				_putchar('0' + prod % 10);
			}
		}
		_putchar('\n');
	}
}
