#include "main.h"
/**
 * reverse_array- reverses an array
 * @a: array
 * @n: number of elements
 *
 */
void reverse_array(int *a, int n)
{
	int b, in;

	for (in  = n - 1; in >= n / 2; in--)
	{
		b = a[n - 1 - in];
		a[n - 1 - in] = a[in];
		a[in] = b;
	}
}
