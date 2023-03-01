#include "main.h"

/**
 * _strcat - This function concatenates 2 strings
 * @dest: This is a destination string
 * @src: This is a source string
 * Return: A character value
 */

char *_strcat(char *dest, char *src)
{
	char *temp;

	temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
