#include "main.h"

/**
 * _strlen - This function returns the length of a string
 * @s:Input string
 * Return: Nothing
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
