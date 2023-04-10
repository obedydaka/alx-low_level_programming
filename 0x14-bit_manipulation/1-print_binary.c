#include "main.h"

/**
 * print_binary - This function prints a binary number without % or /
 * @n: The number to be printed
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int check = 0;
	unsigned int max = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max)
	{
		if (check == 1 && (n & max) == 0)
		{
			_putchar('0');
		}
		else if ((n & max) != 0)
		{
			_putchar('1');
			check = 1;
		}
		max >>= 1;
	}
}
