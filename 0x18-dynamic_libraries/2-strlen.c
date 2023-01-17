#include "main.h"

/**
 * _strlen - calculate the letter of a string.
 * @s: pointer to the character array.
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
