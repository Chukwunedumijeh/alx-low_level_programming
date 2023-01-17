 #include "main.h"
 #include <stdio.h>


/**
 * _atoi - converts a string to an integer
 * @s: steing to convert
 * Return: value of integer
 */

int _atoi(char *s)
{
	int i, sign;
	unsigned int number;

	sign = 1;
	i = 0;
	number = 0;

	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if  (s[i] == '-')
			sign *= -1;
		i++;
	}
	while ((s[i] >= '0') && (s[i] <= '9'))
	{
		number = number * 10 + (s[i] - '0');
		i++;
	}
	return (number * sign);


}
