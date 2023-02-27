#include "main.h"

/**
 * rev_string - This function reverses a string followed
 * by a new line.
 * @s: Input string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int length;
	int i;
	char bk

	length = 0;
	i = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	while (i < length--)
	{
		bk = s[i];
		s[i++] = s[length];
		s[length] = bk;
	}
}
