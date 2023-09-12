#include "main.h"
/**
 * islower - function that checks for lowercase character.
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
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
