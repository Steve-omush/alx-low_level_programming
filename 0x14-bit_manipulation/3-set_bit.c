#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to the unsigned long integer.
 * @index: index of the bit to set to 1.
 *
 * Return: 1 if worked, otherwise -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
	*n = *n | mask;
	return (1);
}
