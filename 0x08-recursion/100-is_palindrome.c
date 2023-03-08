#include "main.h"

int _strlen_recursion(char *s);
int check_palindrome(char *s, int len);

/**
 * is_palindrome - This function checks if a string if palidrome
 * @s: Input string
 * Return: Returns 1 is the sring is palidrome or 0 if not
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
	{
		return (1);
	}
	return (check_palindrome(s, len));
}

/**
 *_strlen_recursion - This function finds the length of string s
 * @s: A string to calculate length
 * Return: the length of string s
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * check_palindrome - This function comfirms if a string is a palindrome
 * @s: An input string
 * @len: the length of the string s
 * Return: A reverse string
 */

int check_palindrome(char *s, int len)
{
	if (len <= 1)
	{
		return (1);
	}
	else if (*s == *(s + len - 1))
	{
		return (check_palindrome(s + 1, len - 2));
	}
	else
		return (0);

}
