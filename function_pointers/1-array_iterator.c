#include <stddef.h>
/**
 * array_iterator- execute a function pointer on each element of an array
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	   for (i = 0; i < (int)size; i++)
		   action(array[i]);
}
