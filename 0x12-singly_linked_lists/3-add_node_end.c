#include <stdlib.h>
#include <string.h>
#include "lists.h"

size_t _strlen(const char *str);

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the head of the list_t.
 * @str: string to be added.
 *
 * Return: address of new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->len = _strlen(ptr->str);
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return (ptr);
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
