#include "main.h"
#include <stdlib.h>

/**
 * create_array - This function creates an array of strings
 * @size: Size of the array
 * @c: Characters of the array
 * Return: Returns a pointer to the array or NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
