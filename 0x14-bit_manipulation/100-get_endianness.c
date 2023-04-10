#include "main.h"

/**
 * get_endianness - This function checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	char *s = (char *)&s;

	if (*s)
	{
		return (1);
	}
	return (0);
}
