#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s:  string to encode
 * Return: address of s
 */

char *rot13(char *s)
{
	int i, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char boolean;

	for (i = 0; s[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; b[j] != '\0' && boolean == 0; j++)
		{
			if (s[i] == b[j])
			{
				s[i] = a[j];
				boolean = 1;
			}
		}
	}
	return (s);
}
