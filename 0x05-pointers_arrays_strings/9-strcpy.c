#include "main.h"

/**
 * _strcpy - copies string pointec to by src bufferpointed to by dest
 * @src: source to copy
 * @dest: destination of copy
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
