#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * Description: followed by a new line.
 * Return: Nothing
 */
void more_numbers(void)
{
	int i = 0, a;

	do {
		for (a = 0; a <= 14; a++)
		{
			if (a <= 9)
			{
				_putchar(a + '0');
			}
			else
			{
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
		}
		_putchar('\n');
		i++;
	} while (i < 10);
}
