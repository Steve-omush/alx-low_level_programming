#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: argument count
 * @argv: argumet vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
