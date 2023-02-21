#include "main.h"

/**
 * print_alphabet - Check description below.
 * Description: Printing alphabet in lowercase fallowed by a new line.
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char a;
	char b;

	for (a = 0; a < 10; a++)
	{

		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
