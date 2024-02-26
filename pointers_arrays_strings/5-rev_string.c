#include "main.h"
/**
 * rev_string- prints string
 * @s: string
 */
void rev_string(char *s)
{
	int l = 0, in = 0;
	char t;

	while (s[in++])
		l++;
	for (in = l - 1; in >= l / 2; in--)
	{
		t = s[in];
		s[in] = s[l - in - 1];
		s[l - in - 1] = t;
	}
}
