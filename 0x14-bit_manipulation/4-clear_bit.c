#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the unsigned long int.
 * @index: index of the bit to be clear.
 *
 * Return: 1 if worked, -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
	*n = *n & ~mask;
	return (1);
}
