#include "main.h"
/**
 * _strlen- string length
 * @s: string
 * Return: s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
