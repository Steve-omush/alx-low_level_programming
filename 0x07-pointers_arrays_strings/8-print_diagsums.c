#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - sum of the two diagonals
 * @a: input integer array
 * @size: number of elements in diagonal
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (size * i) + i);
	}

	for (i = 0; i < size; i++)
	{
		sum2 += *(a + (size * i) + (size - i - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
