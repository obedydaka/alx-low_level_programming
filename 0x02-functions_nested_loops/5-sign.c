#include "main.h"

/**
 * print_sign - check main
 * @n: an input character
 * Description: This program checks whether
 * the number is negative or positive.
 * Return: 1 if number is positive, 0 if 0 or -1 if negative
 */

int print_sign(int n)
{
	int number;

	if (n > 0)
	{
		number = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		number = 0;
		_putchar('0');
	}
	else
	{
		number = -1;
		_putchar('-');
	}

	return (number);
}
