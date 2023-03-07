#include "main.h"
#include <stddef.h>

/**
 * _strchr - This function locates a character in a string
 * @s: The original string
 * @c: The character to be located
 * Return: The string character pointer
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
