#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memeory with a constant byte
 * @s: address of memory to print
 * @b: char to print
 * @n: size of memory to print
 *
 * Return: pointer to the memory areas
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	while (n > 0)
	{
		s[j] = b;
		j++;
		n--;
	}
	return (s);
}
