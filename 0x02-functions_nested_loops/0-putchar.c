#include "main.h"
#include <unistd.h>
/**
 * main - Check description. Entry point
 * Description: It prints _putchar, followed by a new line
 * Return: Always 0 
 */
int main(void)
{
	char letter[9] = "_putchar";
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(letter[i]);
	}
	_putchar('\n');
	return (0);
}
