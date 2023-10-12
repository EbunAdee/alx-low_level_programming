#include "lists.h"

/**
 * dlistint_len - returns the number of elmts in dlistint_t list
 * @h: a pointer to the first node
 * Return: the length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
