#include "main.h"

/**
 * puts2 - prints out every other char of the string.
 * @str: input string to print.
 */

void puts2(char *str)
{
	int  length, i;

	length = 0;

	while (str[i] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
