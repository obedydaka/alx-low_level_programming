#include "main.h"

/**
 *_abs - Check main
 * @r: Input interger number
 * Description: This function returns absolute value of
 * any given number
 * Return: Absolute value of the number r
 */

int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
