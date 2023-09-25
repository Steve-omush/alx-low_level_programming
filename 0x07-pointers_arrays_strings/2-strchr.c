#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in string
 * @s: input string to be searched
 * @c: charcter to search for
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
