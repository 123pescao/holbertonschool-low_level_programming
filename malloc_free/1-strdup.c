#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup- returns pointer to a new string which is duplicate for str
 * @str: char pointer
 *
 * Return: pointer to a new string
 */
char *_strdup(char *str)
{

	int i;
	int len;
	char *s;

	if (str = 0)
		return (0);

	len = 0;
	while (str[len] != '\0')
		len++;
	len++;

	s = malloc(len * sizeof(char));
	if (s ==0)
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
