#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0, n = 0, i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}

