#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: pointer to a string
 *
 * Return: Nothing
 */
void puts2(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
	}
	_putchar('\n');
}
