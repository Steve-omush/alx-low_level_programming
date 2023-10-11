#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a paraemeter on each element
 * @array: array of integeres
 * @size: size of array
 * @action: pointer to function to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
