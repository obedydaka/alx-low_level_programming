#include "main.h"

/**
 * clear_bit - This function sets a bit to 0 at given index
 * @n: The number to set bit in
 * @index: The index to set bit at
 * Return: 1 if it worked, or -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maxidx = 0x01;

	maxidx = ~(maxidx << index);
	if (maxidx == 0x00)
	{
		return (-1);
	}
	*n &= maxidx;
	return (1);
}
