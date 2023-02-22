#include "main.h"

/**
 * Check - main
 * Desciption: This function prints times table for numbers from 0-14
 * @n: inputs integer value
 * Return: Nothing
 */

void print_times_table(int n)
{
	int a;
	int b;

	if (n > 0 && n < 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				putformat(i * j);
			}
			_putchar('\n');
		}
	}
}
