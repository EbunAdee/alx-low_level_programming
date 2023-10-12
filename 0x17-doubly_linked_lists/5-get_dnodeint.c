#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: a pointer to the head of the list
 * @index: the index of the element to be get
 * Return: the nth node or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (index == 0)
		return (head);
	while (i < index && current != NULL)
	{
		i++;
		current = current->next;
	}
	if (i == index)
		return (current);
	return (NULL);
}
