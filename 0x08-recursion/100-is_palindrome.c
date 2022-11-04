#include "main.h"

/**
 * _length - checks the length of a string
 * @s: the string
 * Return: The length of a string
 */

int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checker - checks if string is palindrome
 * @lg: Length of the string
 * @s: The string
 * Return: 1 if palindrome or 0 if not
 */

int checker(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checker(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: is the string
 * Return: 1 if the string is a palindrome or 0 otherwise
 */

int is_palindrome(char *s)
{
	return (checker(0, _length(s) - 1, s));
}

