#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments of program
 * @ac: argument of command line
 * @av: argument vector
 *
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int total_length = 0, i, index = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			int arg_length = 0;

			while (av[i][arg_length] != '\0')
				arg_length++;
			total_length += arg_length + 1;
		}
	}
	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			int arg_length = 0;

			while (av[i][arg_length] != '\0')
				result[index++] = av[i][arg_length++];
			result[index++] = '\n';
		}
	}
	result[index] = '\0';
	return (result);
}
