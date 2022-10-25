#include "main.h"

/**
 * puts2 - prints out every other char of the string.
 * @str: input string to print.
 */

void puts2(char *str)
{
	int length;

	while (*str != 0)
	{
		if (length % 2 == 0)
		{
			_putchar(*str);
		}
		length++;
		str++;
	}
	_putchar(10);
}
