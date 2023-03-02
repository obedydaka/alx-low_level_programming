#include "main.h"

/**
 * _strncpy - This function copies a string
 * @dest: This is a destination string
 * @src: This is a source string
 * @n: Number of characters to be copied
 * Return: A character value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen;
	int i;
	char *temp;
	char *start;

	srclen = 0;
	i = 0;
	temp = dest;
	start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;
	if (n > srclen)
	{
		n = srclen;
	}

	src = start;
	for (; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (temp);
}
