#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers.
 * Return: Nothing.
 */

int main(void)
{

	unsigned long count, i, j, k;

	i = 1;
	j = 2;

	for (count = 0; count < 49; count++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);

		if (count == 48)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
