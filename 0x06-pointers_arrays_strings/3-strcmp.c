#include "main.h"

/**
 * _strcmp - This function compares two strings.
 * @s1: Input first string
 * @s2: Input second string
 * Return: The difference of s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
