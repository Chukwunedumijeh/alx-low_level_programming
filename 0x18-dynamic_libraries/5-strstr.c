#include "main.h"

/**
 * _strstr - write a function that locates a substring
 * @haystack: This is the input string
 * @needle: This is to locate the string
 * Return: A pointer to the begining of the located substring or NULL
 *	if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *temp;

		temp = haystack;
		while (*needle == *haystack)
		{
			haystack++, needle++;
		}
		if (*needle == '\0')
			return (temp);
		haystack++;
	}
	return (0);
}
