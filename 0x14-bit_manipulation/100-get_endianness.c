#include "main.h"
#include <stdio.h>

/**
 * get_endianness - check the endianess.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	if (*byte == 1)
		return (1);
	else
		return (0);

}