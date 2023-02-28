#include "main.h"

/** 
 * void swap_int - This function swaps the input of 
 * two intergers pointers
 * @a: First interger pointer input
 * @b: Second interger pointer input
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
