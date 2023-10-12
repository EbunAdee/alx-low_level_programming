#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a pointer to the head of the list
 * @idx: the giving index
 * @n: the giving number to be inserted
 * Return: a pointer to the new node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i = 0;

	if (current == NULL && idx != 0)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (i < idx - 1 && current != NULL)
	{
		i++;
		current = current->next;
	}
	if (i == idx - 1 && current->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else if (i == idx - 1 && current->next != NULL)
	{
		new = malloc(sizeof(dlistint_t *));
		if (new == NULL)
			return (NULL);
		new->n = n;
		(current->next)->prev = new;
		new->next = current->next;
		current->next = new;
		new->prev = current;
		return (new);
	}
	return (NULL);

}
