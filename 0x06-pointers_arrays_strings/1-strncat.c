#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: char pointer which is a string
 * @src: char pointer that appends
 * @n: input integer
 * Description: appends src to the dest
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s1 = dest;

	if ((dest == NULL) && (src == NULL))
	{
		return NULL;
	}

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
