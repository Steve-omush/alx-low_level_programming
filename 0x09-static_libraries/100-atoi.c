#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer;
 * @s: pointer to the string
 *
 * Return: 0 if no numbers in s
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;
	char null = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null = 1;
			num = num * 10 + *s - '0';
		}

		else if (null)
			break;
		s++;
	}

	if (sign < 0)
	{
		num = (-num);
	}

	return (num);
}
