#include <stdio.h>
#include "main.h"

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - adds two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: sum.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts
 * @a: first digit.
 * @b: second digit.
 *
 * Return: subtraction.
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplication.
 * @a: first digit.
 * @b: second digit.
 *
 * Return: multiplication.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - division.
 * @a: digit 1.
 * @b: digit 2.
 *
 * Return: Division.
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		fprintf(stderr, "Error: Division by zero.\n");
		return (0);
	}
}

/**
 * mod - modulus.
 * @a: digit 1.
 * @b: digit 2.
 *
 * Return: Modulus.
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		fprintf(stderr, "Error: Modulo by zero.\n");
		return (0);
	}
}
