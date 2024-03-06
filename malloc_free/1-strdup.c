#include "main.h"
/**
 *_strdup- creates a new array containing a copy of the given string
 *@str: pointer to the string to copy
 *
 *Return: NULL if str is NULL or if memory allocation fails,
 *otherwise return pointer to new copy
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;
		
	   dup = malloc(sizeof(char) *size);
	   if (dup)
	   {
		   while (size--)
			   dup[size] = str[size];

		   return (dup);
	   }
	}
	return (NULL);
}
