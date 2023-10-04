#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates length of string
 * @s: input string
 *
 * Return: Length of string
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * str_concat - concatenates two strings
 * @s1: input string
 * @s2: input string
 *
 * Return: newly allocated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *result;
	char *dest;

	len1 = (s1 != NULL) ? _strlen(s1) : 0;
	len2 = (s2 != NULL) ? _strlen(s2) : 0;
	result = (char *)malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	dest = result;
	if (s1 != NULL)
	{
		while (*s1 != '\0')
		{
			*dest = *s1;
			dest++;
			s1++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2 != '\0')
		{
			*dest = *s2;
			dest++;
			s2++;
		}
	}
	*dest = '\0';

	return (result);
}
