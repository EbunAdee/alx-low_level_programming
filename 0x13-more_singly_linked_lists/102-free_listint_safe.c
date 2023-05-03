#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list.
 * @h: pointer to the pointer to the first element of the list.
 *
 * Return: the size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listint_t *cur, *next;
	
	if (!h || !*h)
		return (0);
	cur = *h;

	while (cur)
	{
		nodes++;
		next = cur->next;
		free(cur);
		if (next >= cur)
			break;
		cur = next;
	}
	*h = NULL;
	
	return (nodes);
}
