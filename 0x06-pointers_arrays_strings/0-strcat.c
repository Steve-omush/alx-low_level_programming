#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat - concatenates tw strings
 * @dest: char pointer which is a string
 * @src: char pointer that appends
 * Description: appends src to the dest
 *
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; ++j)
		;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';

	return (dest);
}
