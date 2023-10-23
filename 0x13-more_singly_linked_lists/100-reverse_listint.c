#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverse listsint_t linked list.
 * @head: pointer to head of linked list.
 *
 * Return: a pointer to first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *new;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp = *head;
	*head = temp->next;
	temp->next = NULL;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		if (new == NULL)
			return (*head);
		*head = new;
	}
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	return (NULL);
}
