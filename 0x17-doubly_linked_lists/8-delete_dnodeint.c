#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of dlistint_t
 * @head: a pointer to the head of the list
 * @index: the giving index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head, *previous = NULL;

	if (current != NULL)
	{
		while (current->prev != NULL)
			current = current->prev;
	}

	while (current != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = current->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				previous->next = current->next;
				if (current->next != NULL)
					(previous->next)->prev = previous;
			}
			free(current);
			return (1);
		}
		previous = current;
		current = current->next;
		i++;
	}
	return (-1);
}
