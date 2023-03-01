#include "main.h"

/**
 * _strncat - This function concatenates n number of 2 strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to be concatenated
 * Return: Return a character
 */

char *_strncat(char *dest, char *src, int n)
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
	while (*dest)
	{
		dest++;
	}
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
	*dest = '\0';
	return (temp);
}
