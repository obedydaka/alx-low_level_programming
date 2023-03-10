#include <stdio.h>
#include "main.h"

/**
 * print_array - This function prints n characters of an array
 * followed by a new line
 * @a: Input array
 * @n: Input number of characters to be printed
 * Return: None
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
