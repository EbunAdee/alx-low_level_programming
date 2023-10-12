#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: a pointer to the first node
 * @n: the giving number to add
 * Return: a pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}
	new->next = current;
	if (current != NULL)
		current->prev = new;
	*head = new;
	return (new);
}
