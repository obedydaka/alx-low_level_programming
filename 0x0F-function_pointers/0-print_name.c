#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - This function prints a name
 * @name: the name to be printed
 * @f: The pointer to the name
 * Return: Return nothing
 */

void print_name(char *name, void (*f)(char *))
{
	(f)(name);
	return;
}
