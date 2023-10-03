#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: sixe of buffer
 * @c: char input
 *
 * Return: NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
