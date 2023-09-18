#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - function that copies src to dest
 * @dest: buffer to be copied
 * @src: char pointer to copy
 * Return: value of pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (char*)dest;
}
