#include <stdio.h>

/**
 * main - prints the name of the flie it was compiled from
 * Return: 0
 */

int main(void)
{
	printf("%s",  __BASE_FILE__);
	return (0);
}
