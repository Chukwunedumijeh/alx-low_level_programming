#include "main.h"

/**
 * print_chessboard - write a function that prints the chessbord
 * @a: this is a variable
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int count, index;

	for (count = 0; count < 8; count++)
	{
		for (index = 0; index < 8; index++)
		{
			_putchar(a[count][index]);
		}
		_putchar('\n');
	}
}
