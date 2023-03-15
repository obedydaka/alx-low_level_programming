#include "main.h"
#include <stdlib.h>

/**
 * str_concat - This function of malloc, concatenates 2 strings
 * @s1: Fisrt string
 * @s2: Second string
 * Return: return a concatenated char string
 */
char *str_concat(char *s1, char *s2)
{
	char *str3, *start1, *start2;
	int i = 0, len1 = 0, len2 = 0;

	start1 = s1;
	start2 = s2;

	if (s1 == NULL)
		s1 = "";

	while (*s1)
	{
		len1++;
		s1++;
	}
	s1 = start1;
	if (s2 == NULL)
		s2 = "";

	while (*s2)
	{
		len2++;
		s2++;
	}
	s2 = start2;

	str3 = malloc(sizeof(char) * (len1 + len2 + 1));
	start1 = str3;
	if (str3 == NULL)
		return (NULL);

	for (; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			str3[i] = *s1;
			s1++;
		}
		else
		{
			str3[i] = *s2;
			s2++;
		}
	}
	str3[i] = '\0';
	return (start1);
}
