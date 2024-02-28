#include "main.h"
/**
 * _strcat- concatenates two strings
 * @dest: destination
 * @src: src
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b = 0;

	while (dest[b])
	{
		b++;
	}
	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b] = src[a];
		b++;
	}
	dest[b] = '\0';
	return (dest);
}
