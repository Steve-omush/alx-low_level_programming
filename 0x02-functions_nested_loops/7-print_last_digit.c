#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 * @num: integer input value
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int value;

	if (num < 0)
	{
		value = -1 * (num % 10);
	}
	else
	{
		value = num % 10;
	}
	_putchar((value % 10) + '0');
	return (value % 10);
}
