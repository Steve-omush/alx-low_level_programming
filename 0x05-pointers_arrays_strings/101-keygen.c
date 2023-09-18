#include "main.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int pass_length = 10;
	char list[300] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{}?";
	int i;

	srand(time(NULL));
	for(i = 0; i < pass_length; i++)
	{
		printf("%c", list[rand() % (sizeof list - 1)]);
	}
	printf("\n");
}
