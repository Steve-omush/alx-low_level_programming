#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of main
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num_bytes, start_index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (start_index = 0; start_index < num_bytes; start_index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (start_index == num_bytes - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
