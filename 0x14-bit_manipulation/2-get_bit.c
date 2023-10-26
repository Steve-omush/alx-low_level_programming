#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned long integer in decimal format.
 * @index: index of the bit to be found.
 *
 * Return: value of bit at that index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
	if (n & mask)
		return (1);
	else
		return (0);
}
