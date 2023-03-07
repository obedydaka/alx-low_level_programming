#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - This function prints the sum of the
 * two diagonals of a square matrix of intergers
 * @a: input pointer
 * @size: input the size of the table
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;
	int max;

	i = 0;
	sum1 = 0;
	sum2 = 0;
	max = size * size;

	for (; i < max; i = i + size - 1)
	{
		sum1 = sum2 + a[i];
	}
	for (i = size - 1; i < max - 1; i = i + size - 1)
	{
		sum2 = sum2 + a[i];
	}
	printf("%d %d\n", sum1, sum2);
}
