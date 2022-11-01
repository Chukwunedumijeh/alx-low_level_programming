#include "main.h"

/**
 * _memset - write a function that fills the memory with a constant byte
 * The _memset() function fills the first n bytes of the memory area pointed
 *	to by s with the constant byte b
 * @s: This is the output and the return
 * @n: This is the number of bytes
 * @b: This is the input string
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}
