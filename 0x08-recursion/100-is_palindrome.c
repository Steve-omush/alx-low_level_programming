#include "main.h"
#include <stdio.h>
#include <stdbool.h>
bool _palindromerecursive(char *s, int begin, int end);

/**
 * is_palindrome - 1 if palindrome, otherwise 0
 * @s: input string
 *
 * Returns: 1 if palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	if (length <= 1)
	{
		return (1);
	}
	return (_palindromerecursive(s, 0, length - 1) ? 1 : 0);
}

/**
 * _palindromerecursive - recursive string
 * @s: input string
 * @begin: first position
 * @end: end position
 *
 * Return: Boolean value
 */
bool _palindromerecursive(char *s, int begin, int end)
{
	if (begin >= end)
	{
		return (true);
	}
	if (s[begin] != s[end])
	{
		return (false);
	}
	return (_palindromerecursive(s, begin + 1, end - 1));
}
