#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: input string
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
