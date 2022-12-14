#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */

void times_table(void)
{
	int rone, cone, d;

	for (rone = 0; rone <= 9; rone++)
	{
		for (cone = 0; cone <= 9; cone++)
		{
			d = (rone * cone);
			if (cone != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (d >= 10)
			{
				_putchar((d / 10) + '0');
				_putchar((d % 10) + '0');
			}
			else if (d < 10 && cone != 0)
			{
			_putchar(' ');
			_putchar((d % 10) + '0');
			}
			else
				_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}
