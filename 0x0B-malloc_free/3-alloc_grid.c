#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This fuction cretaes a pointer to
 * a 2 dimensional array
 * @width: The widthe of the array
 * @height: The height of the array
 * Return: Retur a pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}
