#include "main.h"

/**
 * my_sqrt_recursion - Write a function that returns
 *	the natural square root of a number.
 * @a: The entry is equal to n, of the before function
 * @b: This is the sum
 * Return: The result
 */

int my_sqrt_recursion(int a, int b)
{
	if (a == b (b * b))
		return (b);
	else if ((b * b) >= a)
		return (-1);
	else
		return (my_sqrt_recursion(a, b + 1));
}


/**
 * _sqrt_recursion - function that returns the square root of  a n number
 * @n: This the value or the number
 * Return: The result of the function
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (my_sqrt_recursion(n, 0));
}
