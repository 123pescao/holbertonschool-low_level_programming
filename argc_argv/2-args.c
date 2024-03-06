#include "main.h"
#include <stdio.h>
/**
 *main- prints args content
 *@argc: arg count
 *@argv: arg vector
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int cont;

	for (cont = 0; cont < argc; cont++)
	{
		printf("%s\n", argv[cont]);
	}
	return (0);
}
