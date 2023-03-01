#include "main.h"

/**
 * reverse_array - This function reverse an array.
 * @a: Input an array
 * @n: number of elements of array to reverse
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
