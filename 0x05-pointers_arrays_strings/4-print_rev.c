#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * Main - Entry point
 * Description: This program prints a string in reverse
 * followed by a new line
 * Return: Nothing
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (length)
	{
		_putchar(s[--length]);
	}
	_putchar('\n');
}
