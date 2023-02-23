#include "main"

/**
 * print_numbers - This function prints numbers from 0 to 9,
 * followed by a new line.
 * Return: Always 0
 */

void print_numbers(void)
{
	char n;
	
	n = '0';

	for (; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
