#include "main.h"
/**
 * cap_string- capitalizes every word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int c, d;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (c = 0; s[c] != '\0'; c++)
	{
		if (c == 0 && s[c] >= 'a' && s[c] <= 'z')
			s[c] -= 32;

		for (d = 0; d < 13; d++)
		{
			if (s[c] == spe[d])
			{
				if (s[c + 1] >= 'a' && s[c + 1] <= 'z')
				{
					s[c + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
