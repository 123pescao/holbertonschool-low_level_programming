#include <stdio.h>
#include "main.h"
/**
 * print_array- prints array of integers
 * @a: int one
 * @n: int two
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
