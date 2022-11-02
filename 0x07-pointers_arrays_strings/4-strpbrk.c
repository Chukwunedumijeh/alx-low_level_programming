#include "main.h"

/**
 * _strpbrk - searches a string for any of the set of bytes.
 * @s: This is the input string
 * @accept: This is the string to locate
 * Return: Returns a pointer to the bytein s that matches one of the
 *	bytes in the accept, or NULL if no such byteis found
 */
char *_strpbrk(char *s, char *accept);
{
	unsigned int index, count;

	for (count = 0; accept[count] != '\0'; count++)
	{

		if (accept[count] == s[index])
		{
			return (&s[index]);
		}
	}
}
