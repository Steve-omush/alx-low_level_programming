#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop -  finds loop in linked list.
 * @head: pointer to head of linked list.
 *
 * Return: address of the node where loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t = head, *h = head;

	while (h && t && t->next)
	{
		h = h->next;
		t = t->next->next;
		if (h == t)
			return (h);
	}
	return (NULL);
}
