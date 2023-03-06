#include "main.h"
#include <string.h>

/**
 * _strpbrk -  This function searches in a string for any of a set of bytes
 * @s: As input string
 * @accept: As an input character that should be
 * located in string s
 * Return:  a pointer to the byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
