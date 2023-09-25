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
	int a, b, c;

	a = 0;
	c = 0;
	while (haystack[a] != '\0')
	{
		b = 0;
		while (needle[b + c] != '\0' && haystack[a + c] != '\0' && needle[b + c] == haystack[a + c])
		{
			if (haystack[a + c] != needle[b + c])
			{
				break;
			}
			c++;
		}
		if (needle[b + c] == '\0')
		{
			return (&haystack[a]);
		}
		b++;
		a++;
	}
	return (NULL);
}
