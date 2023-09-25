#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * _strspn - length of a prefix substring
 * @s: string to be scanned
 * @accept: characters to match
 *
 * Return: number of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned initial_length = 0;
	unsigned i, j;

	unsigned len1 = strlen(s);
	unsigned len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		bool found_match = false;
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				found_match = true;
				break;
			}
		}
		if (!found_match)
			break;
		else
			initial_length++;
		}

	return (initial_length);
}
