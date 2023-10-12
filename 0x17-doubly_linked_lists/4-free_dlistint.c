#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: a pointer to the first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	if (current == NULL)
		return;
	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
