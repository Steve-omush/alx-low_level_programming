#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: a pointer to integer to swap
 * @b: a pointer to integer to swap
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
