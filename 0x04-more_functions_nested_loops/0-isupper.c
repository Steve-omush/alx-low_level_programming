#include "main.h"
/**
 * isupper - function that checks for uppercase character.
 * @c: Input integer to be checked
 *
 * Return: 1 on uppercase and 0 otherwise
 */
int _isupper(int c)
{
	int x = c;

	if (x >= 'A' && x <= 'Z')
	{
		return (1);
	}
	return (0);
}
