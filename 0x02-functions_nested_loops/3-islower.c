#include "main.h"
/**
 * _islower - checks for lowercase character.
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 */
int _islower(int c)
{
	int i = 0;
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
		{
			i = 1;
		}
	}
	return (i);
}
