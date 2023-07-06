#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *dupli = *head;
	unsigned int node;

	if (dupli == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(dupli);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (dupli->next == NULL)
			return (-1);

		dupli = dupli->next;
	}

	temp = dupli->next;
	dupli->next = temp->next;
	free(temp);
	return (1);
}
