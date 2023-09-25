#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in string
 * @s: input string to be searched
 * @c: charcter to search for
 * Return: returns pointer to c position
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
