#include "main.h"

/**
 * cap_string - capitalizes words
 * @s: input string to capitalize
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int i, j;
	int counter;
	char separators[] = ",;.!?(){}\n\t\" ";

	for (i = 0, counter = 0; s[i] != '\0'; i++)
	{
		if (s[0] > 96 && s[0] < 123)
			counter = 1;
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (separators[j] == s[i])
				counter = 1;
		}

		if (counter)
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] -= 32;
				counter = 0;
			}
			else if (s[i] > 64 && s[i] < 91)
				counter = 0;
			else if (s[i] > 47 && s[i] < 58)
				counter = 0;
		}
	}
	return (s);
}
