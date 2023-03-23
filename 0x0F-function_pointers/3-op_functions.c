#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - This function returns the sum of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The sum of a + b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This function returns the subtraction of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The substraction of a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This function returns the multiplication of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The multiplication of a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This function returns the division of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The division of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}


/**
 * op_mod - This function returns the module of a and b.
 * @a: an input integer
 * @b: an input integer
 * Return: The module of a and b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
