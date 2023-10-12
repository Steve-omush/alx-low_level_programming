#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list ap;

		va_start(ap, n);

		sum = 0;
		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);
		va_end(ap);
	}
	return (sum);
}
