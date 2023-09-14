#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9
 * Description: Do not print 2 and 4
 * Description: only use _putchar twice
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int a = 0;

	do
	{
		if (a == 2 || a == 4)
		{
			a = a + 1;
			continue;
		}

		_putchar(a + '0');
		a++;
	} while (a <= 9);

	_putchar('\n');
}
