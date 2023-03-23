#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - This function excutes a function
 * given in form of a parameter
 * @array: array of the function
 * @size: size of the array
 * @action: the given function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
