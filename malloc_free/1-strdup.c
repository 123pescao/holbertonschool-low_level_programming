#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup- returns pointer to a new string which is duplicate for str
 *@str: char pointer
 *
 *Return: pointer to a new string
 */
char *_strdup(char *str)
{

	int i;
	int len;
	char *s;

	if (str = NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len]; len++)

	s = (char *)malloc((len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i <= len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
