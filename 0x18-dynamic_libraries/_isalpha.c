#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: Is the character to be checked.
 * Return: 1 if letter, lowercase, uppercase or 0 otherwise
 */
int _isalpha(int c)
{
	char upper, lower;
	int letter = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			if (c == lower || c == upper)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
