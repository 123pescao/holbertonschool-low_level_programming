#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything, depending on the format.
 * @format: A string of characters representing the argument types.
 *          Types are:
 *          c: char
 *          i: integer
 *          f: float
 *          s: char* (prints (nil) if NULL)
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j;
char *str, *separator = "";
const char valid_formats[] = "cifs";

va_start(args, format);

while (format && format[i])
{
j = 0;
while (valid_formats[j])
{
if (format[i] == valid_formats[j] && j <= 3)
{
printf("%s", separator);
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
}
separator = ", ";
break;
}
j++;
}
i++;
}

va_end(args);

printf("\n");
}

