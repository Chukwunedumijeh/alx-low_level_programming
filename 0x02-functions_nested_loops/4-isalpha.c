#include "main.h"

/**
 * _isalpha - This program checks for alphabtic character
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 * @c: input parameter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
