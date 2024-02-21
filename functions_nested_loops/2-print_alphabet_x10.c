#include "main.h"
/**
 *print_alphabet_x10- Prints alphabet 10 times the alphabet
 *in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int m = 0;
	char letter;

	while (m <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		m++;
	}
}
