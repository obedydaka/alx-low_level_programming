#include "main.h"

/**
 * print_numbers - This function prints numbers from 0 to 9,
 * followed by a new line.
 * Return: Nothing
 */

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
