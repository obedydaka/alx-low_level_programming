#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - This finction converts binary number to
 * an unsigned integer
 * @b: A pointer to binary string
 * Return: unsigned integer converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bs = 1, reslt = 0, length = 0;

	if (b == NULL)
		return (0);

	while (b[length])
	{
		length++;
	}
	while (length)
	{
		if (b[length - 1] != '0' && b[length - 1] != '1')
		{
			return (0);
		}

		if (b[length - 1] == '1')
		{
			reslt += bs;
		}
		bs *= 2;
		length--;
	}
	return (reslt);
}
