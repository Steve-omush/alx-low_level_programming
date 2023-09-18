#include "main.h"
#include <stdio.h>

/**
 * print_array - printsn elements of an array
 * @a: array of element
 * @n: number of elements be printed
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
