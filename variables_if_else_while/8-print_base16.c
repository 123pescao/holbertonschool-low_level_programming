#include <stdio.h>
/**
 *main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 48; num++)
	if (num < 10)
	putchar(num + '0');
	putchar(num - 10 + 'a');
	putchar('\n');
	return (0);
}
