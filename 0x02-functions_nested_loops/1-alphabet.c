#include "main.h"

/**
 * void print_alphabet(void); - This program
 *	 Prints the alphabets, in lowercase.
 * Return: void.
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
