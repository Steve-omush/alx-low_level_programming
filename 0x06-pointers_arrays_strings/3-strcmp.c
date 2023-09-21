#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: string pointer
 * @s2: string pointer input
 *
 * Return: result of compare
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((*(unsigned char*)s1) - (*(unsigned char*)s2));
}
