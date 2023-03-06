#include "main.h"
#include <string.h>

/**
 * _strspn - This function gets the length of a prefix substring
 * @s: The first string
 * @accept: the second string
 * Return: Usigned integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int length;
	int found;
	char *start;

	length = 0;
	start = accept;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				length++;
				found = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (found == 0)
		{
			break;
		}
	}
	return (length);
}
