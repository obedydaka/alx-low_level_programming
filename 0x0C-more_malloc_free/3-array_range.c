#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - This function creates an array of integers
 * @min: min number to start
 * @max: max number to start
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *arr2;
	int dif;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	dif = max - min;
	arr2 = malloc((dif + 1) * sizeof(int));

	if (arr2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= dif; i++)
	{
		arr2[i] = min++;
	}
	return (arr2);
}
