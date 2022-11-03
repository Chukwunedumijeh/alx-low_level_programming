#include "main.h"

/**
 * factorial - write a function that returns the factorialof a given number
 * @n: This is the input number
 * Return: The factorial of a given number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
