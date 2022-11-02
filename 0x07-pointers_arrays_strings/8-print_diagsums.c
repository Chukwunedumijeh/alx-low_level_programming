#include "main.h"

/**
 * print_diagsums - Write a function that prints
 * the sum of the two diagonals of a square matrix of integers.
 * @a: The array to sum
 * @size: This is he length of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int as, ds, i, sumAs, sumDs;

	sumAs = sumDs = 0;
	as = 0;
	ds = size - 1;
	for (i = 0; i < size; i++)
	{
		sumAs += *(a + i * size + as);
		sumDs += *(a + i * size + ds);
		as += 1;
		ds -= 1;
	}
	printf("%d, %d\n", sumAs, sumDs);
}
