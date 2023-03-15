#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This function duplicate the string of a pointer
 * @str: Pointer string to be duplicated
 * Return: Return a pointer char
 */

char *_strdup(char *str)
{
	char *str2;
	char *start;
	int i;
	int len;

	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	start = str;

	while (str)
	{
		len++;
		str++;
	}
	str =start;

	str2 = malloc((len + 1) * sizeof(char));
	start = str2;

	if (str2 != NULL)
	{
		for (i = 0; i < len; i++)
		{
			str2[i] = *str;
			str++;
		}
		str2[i] = '\0';
		return (start);
	}
	else
	{
		return (NULL);
	}
}
