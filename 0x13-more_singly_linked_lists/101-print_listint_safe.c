#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head of linked list.
 *
 * Return: number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	const listint_t *temp = head, *current = head;

	if (head == NULL)
		exit(98);

	while (temp && current && current->next && head)
	{
		temp = temp->next;
		current = current->next->next;
		if (temp == current)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}
	head = NULL;
	return (node);
}
