#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of dlistint_t list
 * @head: a pointer to the head of the list
 * @n: the giving number to be added
 * Return: a pointer to te new node or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	else
		*head = new;
	new->prev = current;
	return (new);

}
