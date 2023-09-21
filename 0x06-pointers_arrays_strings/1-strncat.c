#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: char pointer to a string
 * @src: char pointer to a string to be concatenated
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s1 = dest;

	if ((dest == NULL) && (src == NULL))
		return NULL;

	while (*s1 != '\0')
	{
		s1++;
	}

	while (n--)
	{
		if (!(*s1++ = *src++))
		{
			return (dest);
		}
	}

	*s1 = '\0';

	return (dest);
}
