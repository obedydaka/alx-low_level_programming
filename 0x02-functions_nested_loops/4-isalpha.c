#include "main.h"

/**
 * _isalpha - Check main.h
 * @c: Input a character
 * Description: This function returns 1 if the input character is a
 * lowercase or uppercase alphabetic letter.
 * Return: 1 or 0 in otherwise.
 */

int _isalpha(int c)
{
	char lowerc;
	int upperc;
	int foundC = 0;

	for (lowerc = 'a'; lowerc <= 'z'; lowerc++)
	{
		for (upperc = 'A'; upperc <= 'Z'; upperc++)
		{
			if (c == lowerc || c == upperc)
			{
				foundC = 1;
			}
		}
	}
	return (foundC);
}
