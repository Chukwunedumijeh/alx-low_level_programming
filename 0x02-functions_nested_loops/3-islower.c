#include "main.h"

/**
 * _islower - This program checks
 *	if a charcter is lowercase
 *	letter from the English alphabet
 * @c: Input parameter
 * Return: 1 for lowercase, 0 if it is not lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
