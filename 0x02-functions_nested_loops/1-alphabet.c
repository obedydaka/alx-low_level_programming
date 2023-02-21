#include <stdio.h>
#include "main.h"

/**
 * print_alphabet
 * Description: Printing alphabetical order in lowercase fallowed by a new line
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
