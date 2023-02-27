#include "main.h"
#include <stdio.h>

/**
 * Main - Entry point
 * Description: This program prints a string in reverse
 * followed by a new line
 * Return: Nothing
 */

void print_rev(char *s)
{
	strrev(s);
	printf("%s\n", s);
	return (0):
}
