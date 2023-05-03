#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node of the list.
 * @index: index of the node to return, starting from 0.
 *
 * Return: If the node at the given index exists, return a pointer to it.
 * Otherwise, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cur = head;
	unsigned int a = 0;

	while (cur != NULL)
	{
		if (a == index)
		return (cur);
		a++;
		cur = cur->next;
	}
	return (NULL);
}
