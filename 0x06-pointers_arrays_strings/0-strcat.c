#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: the string @src is to be added
 * @src: the string to be appended
 * Return: pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
