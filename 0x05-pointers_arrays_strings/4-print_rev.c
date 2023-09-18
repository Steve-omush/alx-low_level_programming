#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string reversed
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;

	while (count)
		_putchar(s[--count]);

	_putchar('\n');
}
