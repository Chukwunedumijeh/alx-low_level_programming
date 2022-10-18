#include "main.h"

/**
 * print_sign - This program determines wether
 *	an integer is positive,negative or zero.
 * @n: parameter
 * Return: 1 if it is positive, 0 if zero,
 *	-1 if negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else  if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
