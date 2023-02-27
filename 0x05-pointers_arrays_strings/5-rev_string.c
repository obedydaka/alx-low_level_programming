#include "holberton.h"

/**
 * rev_string - This function reverses a string followed
 * by a new line.
 * @s: Input string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
