#include "main.h"
/**
 * _islower - check if character is lowercase.
 * @c: An input character to be checked
 *
 * Return: 1 if the character is lowercase otherwise 0
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
