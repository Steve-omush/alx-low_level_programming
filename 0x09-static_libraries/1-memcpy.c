#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: char array to copy to
 * @src: char array to copy from
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *end = dest;
	char *start = src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		end[i] = start[i];
	}
	return (dest);
}
