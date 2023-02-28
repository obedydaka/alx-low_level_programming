#include <stdio.h>

/**
 * _atoi - This function converts a string to integers
 * @s: Input string
 * Return: Integer after conversion
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char skip = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		if (*s >= '0' && *s <= '9')
		{
			skip = 1;
			total = total * 10 + *s - '0';
		}
		else if (skip)
		{
			break;
		}
		s++;
	}
	if (sign < 0)
	{
		total = (-total);
	}
	return (total);
}
