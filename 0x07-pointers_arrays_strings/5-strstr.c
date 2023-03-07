#include "main.h"
#include <stddef.h>

/**
 * _strstr - This function locates a substring in another string
 * @haystack: The second string to be checked
 * @needle: The source of the substring
 * Return: Return the pointer of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *bk;

	bk = haystack;

	while (*haystack)
	{
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		else
		{
			haystack = bk;
		}
	}
	return (NULL);
}
