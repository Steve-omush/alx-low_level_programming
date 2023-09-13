#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int a = 1, b = 2, sum = 2, next;

	for (i = 2; i < 50; i++)
	{
		next = a + b;
		a = b;
		b = next;

		if ((next % 2) == 0 && next < 4000000)
		{
			sum += next;
		}
	}
	printf("%d\n", sum);

	return (0);
}
