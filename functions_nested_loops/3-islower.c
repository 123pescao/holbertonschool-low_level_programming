#include "main.h"
/**
 *is_lower - Checks for lower case character.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int is_lower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
