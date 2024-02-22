#include "main.h"
/**
 *print_most_numbers- prints the numbers
 */
void print_most_numbers(void)
{
	char letter;

	for (letter = '0'; letter <= '9'; letter++)
	{
		if (letter != '2' && letter != '4')
	{
		_putchar(letter);
	}
		_putchar('\n');
	}
}
