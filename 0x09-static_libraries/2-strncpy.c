#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string.
 * @dest: input pointer string
 * @src: input pointer string
 * @n: input integer
 *
 * Return: resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
