#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - searches a string for any bytes
 * @s: string to b searched
 * @accept: characters to search
 *
 * Return: pointer to byte s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
