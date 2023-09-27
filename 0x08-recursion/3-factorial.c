#include "main.h"
#include <stdio.h>

/**
 * factorial - factorial number
 * @n: input integer
 *
 * Return: factorial value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
