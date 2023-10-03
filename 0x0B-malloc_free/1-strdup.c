#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates string returns pointer
 * @str: string to duplicate
 *
 * Return: Pointer to duplicated string
 */
char *_strdup(char *str)
{
	size_t len;
	const char *temp;
	char *duplicate;
	char *d;

	if (str == NULL)
	{
		return (NULL);
	}
	
	len = 0;
	temp = str;
	while (*temp)
	{
		len++;
		temp++;
	}
	
	duplicate = (char *)malloc(len + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	
	d = duplicate;
	temp = str;

	while (*temp)
	{
		*d = *temp;
		d++;
		temp++;
	}
	*d = '\0';

	return (duplicate);
}
