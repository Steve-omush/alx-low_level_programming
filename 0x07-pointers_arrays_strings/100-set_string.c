#include "main.h"
#include <string.h>

/**
 * set_string - sets value of a pointer to char
 * @s: address of string
 * @to: input string
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
