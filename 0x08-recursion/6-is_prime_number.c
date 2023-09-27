#include "main.h"
#include <stdio.h>
#include <stdbool.h>
bool prime_recursive(int n, int div);

/**
 * is_prime_number - returns if integer is prime
 * @n: input integer
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (prime_recursive(n, n - 1) ? 1 : 0);
}

/**
 * prime_recursive - recursive prime function
 * @n: integer input
 * @div: integer to be tested
 *
 * Return: prime value
 */
bool prime_recursive(int n, int div)
{
	if (n <= 1)
	{
		return (false);
	}
	if (div == 1)
	{
		return (true);
	}
	if (n % div == 0)
	{
		return (false);
	}
	return (prime_recursive(n, div - 1));
}
