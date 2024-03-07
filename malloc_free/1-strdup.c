#include "main.h"
#include <stdlib.h>
/**
 *_strdup- return a pointer
 *@str: string
 *
 *Return: string
 */
char *_strdup(char *str)
{
	int i = 0, n = 1;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n])
	{
		n++;
	}
	s = malloc((sizeof(char) * n) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
