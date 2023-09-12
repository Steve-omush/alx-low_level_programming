#include "main.h"
/**
 * print_sign - function that prints the sign of a number.
 * @n - is the number to be checked
 * Return: 1 and print + if n is > 0 or 0 and print 0 if n is 0 or -1 and print - if n is < 0
 */
int print_sign(int n)
{
	int num = n;
	int result = 0;

	if (num > 0)
	{
		_putchar('+');
		result = 1;
	}
	else if (num < 0)
	{
		_putchar('-');
		result = -1;
	}
	else
	{
		_putchar('0');
		result = 0;
	}
	return (result);
}
