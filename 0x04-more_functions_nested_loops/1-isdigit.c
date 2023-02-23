#include "main.h"

/**
 * _isdigit - This function checks for a number 0 - 9
 * @c: in put an integer
 * Return: 1 if c an integer between 0 - 9.
 */

int _isdigit(int c)
{
	char i;
	int isdigit;

	isdigit = 0;

	for (i = '0'; i < '10'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
