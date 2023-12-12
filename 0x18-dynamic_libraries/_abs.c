#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @num: integer input to be computed
 *
 * Return: Absolute value of integer num
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
