#include "main.h"
#include <stdio.h>
int _recursive(int n, int lower, int upper);

/**
 * _sqrt_recursion - natural sqaure root
 * @n: input integer
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return _recursive(n, 0, n);
}

/**
 * _recursive - recursive to get sqrt
 * @n: input integer
 * @lower: lower bound
 * @upper: upper bound
 *
 * Return: recursive square root
 */
int _recursive(int n, int lower, int upper)
{
	int mid, square;

	if (lower > upper)
	{
		return (-1);
	}

	mid = lower + (upper - lower) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_recursive(n, mid + 1, upper));
	}
	else
	{
		return (_recursive(n, lower, mid - 1));
	}
}
