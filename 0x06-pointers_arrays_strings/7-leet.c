#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @s: input string to encode
 *
 * Return: An encoded string
 */
char *leet(char *s)
{
	int j = 0, i;
	char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'}, letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[j])
	{
		for (i = 0; i < 10; i++)
			if (s[j] == letters[i])
				s[j] = num[i];

		i++;
	}

	return (s);
}
