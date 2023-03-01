#include "main.h"
int The_case_of_seperators(char c);

/**
 * cap_string - This function capitalizes all words in  a string.
 * @s: Input a string
 * Return: cahracter s
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
		}

		if (The_case_of_seperators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}

/**
 * The_case_of_seperators - Separators of words: space, tabulation
 * and special characters
 * @c: Input a character
 * Return: 1 if its seperator, else 0
 */

int The_case_of_seperators(char c)
{
	int i = 0;
	char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };

	for (; i < 13; i++)
	{
		if (c == seperators[i])
		{
			return (1);
		}
	}
	return (0);
}
