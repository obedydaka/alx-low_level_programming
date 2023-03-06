#include "main.h"

/**
 * _memcpy - This function copies the memory area
 * @dest: Destinition pointer
 * @src: Source pointer
 * @n: Unsigned integer
 * Return: Pointer variable
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *begin;

	begin = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (begin);
}
