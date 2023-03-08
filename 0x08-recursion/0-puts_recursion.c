#include "main.h"

/**
 * _puts_recursion - This function that prints a string
 * followed by a new line
 * @s: String input
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
