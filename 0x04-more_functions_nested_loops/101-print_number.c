#include "main.h"
void print_integer(int m);

/**
 * print_number - prints an integer.
 * @n: an input integer
 * Description: only use _putchar
 * Return: Nothing
 */
void print_number(int n)
{
	long m;
	int c;
	long num;

	num = n;

	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}

	m = 1;
	c = 1;
	while (c)
	{
		if (num / (m * 10) > 0)
			m *= 10;
		else
			c = 0;
	}

	while (num >= 0)
	{
		if (m == 1)
		{
			_putchar(num % 10 + '0');
			num = -1;
		}
		else
		{
			_putchar((num / m % 10) + '0');
			m /= 10;
		}
	}
}
