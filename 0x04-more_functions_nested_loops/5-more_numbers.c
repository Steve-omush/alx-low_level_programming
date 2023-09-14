#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * Description: followed by a new line.
 * Return: Nothing
 */
void more_numbers(void)
{
	int i = 0, a;

	while (i < 10)
	{
		a = 0;
		while (a < 15)
		{
			if (a > 9)
				_putchar(a / 10 + '0');

			_putchar(a % 10 + '0');
			a++;
		}
		i++;
		_putchar('\n');
	}
}


