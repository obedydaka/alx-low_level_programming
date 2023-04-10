#include "main.h"

/**
 * set_bit - This function sets a bit at given index to 1
 * @n: Represents the number to set bit in
 * @index: The index to set bit at
 * Return: 1 if it worked, or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maxidx = 0x01;

	maxidx <<= index;
	if (maxidx == 0)
	{
		return (-1);
	}
	*n |= maxidx;
	return (1);
}
