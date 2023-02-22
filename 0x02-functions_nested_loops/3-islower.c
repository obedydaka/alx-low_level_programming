#include "main.h"

/**
 * _islower - Check Holberton
 * @c: to input character
 * Description: Checking for lowercase letters
 * in the given program
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	char i;
	int lowlt;

	lowlt = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			lowlt = 1;
		}
	}

	return (lowlt);
}
