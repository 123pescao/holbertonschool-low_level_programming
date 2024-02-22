#include "main.h"
/**
 *print_numbers- Prints numbers from 0-9, followed by new line.
 */
void print_numbers(void)
{
	char letter;

	for (letter = '0'; letter <= '9'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
