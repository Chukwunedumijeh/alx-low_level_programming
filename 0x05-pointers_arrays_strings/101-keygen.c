#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point.
 * Description: creates a random key for program 101_crackme
 * Return: always 0
 */

int main(void)
{
	char str[100];
	int i, randNum, sum;

	i = 0;
	randNum = 0;
	sum = 0;

	srand(time(NULL));

	for (i = 0; sum <= 2644; i++)
	{
		randNum = (rand() % 25) + '65';

		str[i] = randNum;
		sum += randNum;
	}
	str[i++] = 2772 - sum;
	str[i++] = '\0';
	printf("%s\n", str);

	return (0);
}
