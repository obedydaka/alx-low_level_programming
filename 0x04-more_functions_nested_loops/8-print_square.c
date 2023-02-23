#include "main.h"

/**
 * print_square - This function prints a square,
 * then followed a new line.
 * @size: Input an integer
 * Return: Always 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
