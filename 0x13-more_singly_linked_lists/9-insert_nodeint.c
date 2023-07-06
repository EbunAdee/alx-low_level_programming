iinclude "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t
 *                           list at a given position.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 *       node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n, *dupli = *head;
	unsigned int node;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = dupli;
		*head = newnode;
		return (newnode);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (dupli == NULL || dupli->next == NULL)
			return (NULL);

		dupli = dupli->next;
	}

	newnode->next = dupli->next;
	dupli->next = newnode;

	return (newnode);
}
