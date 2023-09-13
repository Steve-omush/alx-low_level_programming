#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 50;
	int a = 1, b = 2, i, nextTerm;

	printf("%d, %d, ", a, b);

	for (i = 2; i < n; i++)
	{
		nextTerm = a + b;
		a = b;
		b = nextTerm;

		if (nextTerm == 49)
		{
			printf("%d\n", nextTerm);
		}
		else
		{
			printf("%d, ", nextTerm);
		}
	}

	return (0);
}
