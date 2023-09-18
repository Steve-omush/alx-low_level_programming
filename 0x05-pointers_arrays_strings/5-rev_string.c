#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i, c, l;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;
	for (i--, c = 0; c < l / 2; i--, c++)
	{
		temp = s[c];
		s[c] = s[i];
		s[i] = temp;
	}
}
