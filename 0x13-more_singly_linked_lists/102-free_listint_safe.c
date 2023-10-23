#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

void _free_list(listint_t *head);

/**
 * free_listint_safe -  frees a list.
 * @h: pointer to head of list.
 *
 * Return: size of list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	temp = *h;
	while (temp)
	{
		temp = *h;
		temp = temp->next;
		_free_list(temp);
		count++;
	}
	*h = NULL;

	return (count);
}

/**
 * _free_list -  freesa list.
 * @head: pointer to head.
 *
 * Return: Nothing.
 */
void _free_list(listint_t *head)
{
	listint_t *temp;

	if (head)
	{
		temp = head;
		temp = temp->next;
		free(temp);
		_free_list(temp);
	}
	free(head);
}
