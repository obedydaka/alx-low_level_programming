#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This function allocates memory using malloc
 * @b: An unsigned input integer
 * Return: A pointer to allocated memory or NULL if fails
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
