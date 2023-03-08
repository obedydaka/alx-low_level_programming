#include "main.h"

/**
 * factorial - This function returns the factorial of any given number
 * @n: An input integer
 * Return: The factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
