#include "main.h"

/**
 * string_toupper - This function converts all lowercase letters of a  string
 * into upper case
 * @s: Input a string
 * Return: Converted string
 */

char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
	}
	return (start);
}
