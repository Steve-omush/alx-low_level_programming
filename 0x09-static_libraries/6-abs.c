#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @num: integer input to be computed
 *
 * Return: Absolute value of integer num
 */
int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		return (num * -1);
	}
}
