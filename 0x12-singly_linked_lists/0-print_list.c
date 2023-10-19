#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @head: pointer to head of list.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
		if (head -> str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", head -> len, head -> str);
		}
		node_count++;
		head = head -> next;
	}
	return (node_count);
}
