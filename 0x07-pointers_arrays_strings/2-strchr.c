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
	char *bk;

	bk = s;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (bk);
		}
		s++;
	}
	return NULL;
}
