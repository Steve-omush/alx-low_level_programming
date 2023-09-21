#include "main.h"
#include <stdio.h>
#define N 1000
/**
 * reverse_array - reverses content of array
 * @a: input pointer of array
 * @n: number of elements of array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int reverse[N];
	int i;

	for (i = 0; i < n; i++)
	{
		reverse[i] = a[n - i - 1];
	}

	for (i = 0; i < n; i++)
	{
		a[i] = reverse[i];
	}
}
