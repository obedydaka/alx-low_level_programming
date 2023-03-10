#include "main.h"

/**
 * _memset - This function fills memory with a constant byte
 * @s: Pointer character valuable
 * @b: Character valuable
 * @n: unsigned integer
 * Return: Return a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *backup;

	backup = s;

	while (n--)
	{
		*s++ = b;
	}
	return (backup);
}
