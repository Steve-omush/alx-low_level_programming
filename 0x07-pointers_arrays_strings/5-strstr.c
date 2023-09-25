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
	int a = 0, b, c = 0;

	while (haystack[a] != '\0')
	{
		b = 0;
		while (needle[b + c] != '\0' && haystack[a + c] != '\0' && needle[b + c] == haystack[a + c])
		{
			if (haystack[a + c] != needle[b + c])
				break;
			c++;
		}
		if (needle[b + c] == '\0')
			return (&haystack[a]);
		b++;
		a++;
	}
	return (NULL);
}
