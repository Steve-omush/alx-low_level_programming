#include "lists.h"
#include <stdio.h>
#include <string.h>
size_t _strlen(const char *str);

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: double pointer to the head of list_t.
 * @str: string to be added to head of list.
 *
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * _strlen - Calculate the length of a string.
 * @str: input string.
 *
 * Return: length of string.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
