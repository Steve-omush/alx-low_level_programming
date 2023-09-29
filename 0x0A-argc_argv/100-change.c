#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int cent;
	int coinValues[] = {25, 10, 5, 2, 1};
	int i;
	int num_coins;
	int coin_count = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	num_coins = sizeof(coinValues) / sizeof(coinValues[0]);

	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num_coins; i++)
	{
		while (cent >= coinValues[i])
		{
			cent -= coinValues[i];
			coin_count++;
		}
	}
	printf("%d\n", coin_count);

	return (0);
}
