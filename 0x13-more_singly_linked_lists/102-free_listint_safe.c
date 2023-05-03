#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *snail, *cheetah;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	snail = head->next;
	snail = (head->next)->next;

	while (snail)
	{
		if (snail == cheetah)
		{
			snail = head;
			while (snail != cheetah)
			{
				nodes++;
				snail = snail->next;
				snail = snail->next;
			}

			snail = snail->next;
			while (snail != cheetah)
			{
				nodes++;
				snail = snail->next;
			}

			return (nodes);
		}

		snail = snail->next;
		cheetah = (cheetah->next)->next;
	}

	return (0);
}
