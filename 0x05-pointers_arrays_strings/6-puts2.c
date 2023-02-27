#include "main.h"

/**
 * puts2 - This function prints a string
 * @str: Input string
 * Return: nothing
 */

void puts2(char *str)
{
	int length;
	int i;

	length = 0;
	i = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	length--;

	for (; i <= length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
