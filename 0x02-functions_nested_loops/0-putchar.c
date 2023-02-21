#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: Using 'putchar function'
 * Return: 0 (Success).
 */

int main(void)
{
	char word[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}
