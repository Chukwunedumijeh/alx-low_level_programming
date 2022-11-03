#include "main.h"

/**
 * _print_rev_recursion - write a function that prints a string in reverse.
 * @s: This is the input entry
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
