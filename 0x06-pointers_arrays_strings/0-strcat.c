#include "main.h"

/**
 * _srtcat - concatenate two strings
 * @dest: the string @src is to be added
 * @src: the string to be appended
 * Return: pointer to the resulting string @dest
 */

char *_srtcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (s);
}
