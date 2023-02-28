#include "main.h"

/**
 * _strcpy - This function copies a string from 'src' to 'dest'
 * and followed by a new line
 * @dest: The destinition string
 * @src: The source string
 * Return: character string
 */

char *_strcpy(char *dest, char *src)
{
	char *bk = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (bk);
}
