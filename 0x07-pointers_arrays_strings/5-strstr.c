#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - locates a strinG
 * @haystack: string pointer
 * @needle: character to be located
 *
 * Return: pointer to the beginning
 */
char *_strstr(char *haystack, char *needle)
{
	char *start = haystack;
	char *pattern = needle;

	while (*haystack)
	{
		start = haystack;
		needle = pattern;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack = start + 1;
	}
	return (NULL);
}
