#include "main.h"

/**
 * _sign - check main
 * @x: an input character
 * Description: This program checks whether
 * the number is negative or positive.
 * Return: 1 if number is positive, 0 is number is 0 
 * or -1 if number is negative
 */

void _sign(int x)
{
	int number;

	if (x > 0)
	{
		number = 1;
		_putchar('+');
	}
	else if (x == 0)
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
