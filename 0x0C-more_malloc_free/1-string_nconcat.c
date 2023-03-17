#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - This function concatenate n number of string
 * @s1: First string
 * @s2: Second string
 * @n: Number of characters to concatenate
 * Return: Return a pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, len_s1 = 0, len_s2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[len_s1])
	{
		len_s1++;
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[len_s2])
	{
		len_s2++;
	}

	if (n >= len_s2)
	{
		n = len_s2;
	}

	new_str = malloc(len_s1 + n + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (; i < (len_s1 + n); i++)
	{
		if (i < len_s1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[I] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (new_str);
