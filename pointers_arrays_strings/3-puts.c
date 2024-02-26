#include "main.h"
/**
 *_puts- prints string
 *@str: string
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
