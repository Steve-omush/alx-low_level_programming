#include "main.h"
#include <stdio.h>

int separators (char s);

/**
 * cap_string - capitalizes words of string
 * @c: input pointer string
 *
 * Return: c
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (i == 0 && (c[i] >= 'a' && c[i] <= 'z'))
			c[i] -= 32;

		if (separators(c[i]) && (c[i + 1] >= 'a' && c[i + 1] <= 'z'))
			c[i + 1] -= 32;
		i++;
	}

	return (c);
}

/**
 * separators - space, tabulation, new line
 * @s: input character
 * Return: 1 otherwise 0
 */
int separators(char s)
{
	int i = 0;
	char separators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };

	for (; i < 13; i++)
	{
		if (s == separators[i])
			return (1);
	}
	return (0);
}
