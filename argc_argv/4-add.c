#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main- prints add of args numbers
 *@argc: arg count
 *@argv: arg vector
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int num = 0, num1 = 2;

	if (argc == 3)
	{
		num = atoi(argv[1]);
		num1 = atoi(argv[2]);
		printf("%d\n", num + num1);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
