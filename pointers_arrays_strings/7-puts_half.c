#include "main.h"
/**
 *puts_half- prints half of a string
 *
 *@str: input string
 */
void puts_half(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	int half = length / 2;

	if (length % 2)
	{
		half++;
	}
	for (int i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
