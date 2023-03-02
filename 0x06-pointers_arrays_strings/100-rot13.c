#include "main.h"

/**
 * rot13 - This function encodes a string using rot13.
 * @s: Input string
 * Return: String s
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') ||
				(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') ||
					(s[i] >= 'A' && s[i] <= 'M'))
			{
				s[i] += 13;
			}
			else if ((s[i] >= 'n' && s[i] <= 'z') ||
					(s[i] >= 'N' && s[i] <= 'Z'))
			{
				s[i] -= 13;
			}
			i++;
		}
		i++;
	}
	return (s);
}
