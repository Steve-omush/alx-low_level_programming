#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @num: Integer input
 * Return: Nothing
 */
void print_to_98(int num)
{
	int i = 98;

	if (num <= i)
	{
		for (; num <= i; num++)
		{
			printf("%d", num);

			if (num == 98)
			{
				continue;
			}
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; num >= 98; num--)
		{
			printf("%d", num);

			if (num == 98)
			{
				continue;
			}
			printf(", ");
		}
		printf("\n");
	}
}
