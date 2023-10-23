#include "lists.h"
#include <stdio.h>

void _free_listp(listp_t **head);

/**
 * _free_listp - free a list.
 * @head: head of list.
 *
 * Return: No return.
 */
void _free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *new;

	if (head != NULL)
	{
		new = *head;
		while ((temp = new) != NULL)
		{
			new = new->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to head of linked list.
 *
 * Return: number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	listp_t *ptr, *new, *add;

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				_free_listp(&ptr);
				return (node);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}
	_free_listp(&ptr);
	return (node);
}
