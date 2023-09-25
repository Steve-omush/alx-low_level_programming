#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: input string
 * @needle: input string to haystack
 *
 * Return: pointer to substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *start = haystack;
		char *end = needle;

		while (*start == *end && *end != '\0')
		{
			start++;
			end++;
		}
		if (*end == '\0')
			return (haystack);
	}
	return (NULL);
}
