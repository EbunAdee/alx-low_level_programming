#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list.
 *
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *prev;
	unsigned int node;

	if (head == NULL || *head == NULL)
		return (-1);

	cur = *head;
	if (index == 0)
	{
		*head = cur->next;
		free(cur);
		return (1);
	}

	for (node = 0; node < index && cur != NULL; node++)
	{
		prev = cur;
		cur = cur->next;
	}

	if (cur == NULL)
		return (-1);

	prev->next = cur->next;
	free(cur);

	return (1);
}

