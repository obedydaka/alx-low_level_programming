#include "main.h"

/**
 * puts_half - This fnction prints half of the string
 * Follwed by a new line
 * @str: Input string
 * Return: none
 */

void puts_half(char *str);
{
	int i;
	int n;
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length - 1) / 2;
	}
	for ( i = n; i < length; i++)
	{
		_putchar(str[i]);
	}
}
