#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @head: pointer to head in linked list.
 *
 * Return: number of elements in linked list.
 */
size_t list_len(const list_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
