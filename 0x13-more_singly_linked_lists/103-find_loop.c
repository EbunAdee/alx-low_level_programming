#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list.
* @head: pointer to the first element of the list.
*
* Return: Address of the node where the loop starts, or NULL if no loop.
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail, *cheetah;

	if (!head || !head->next)
		return (NULL);

	snail = head->next;
	cheetah = head->next->next;

	while (cheetah && cheetah->next)
	{
		if (snail == cheetah)
		{
			snail = head;
			while (snail != cheetah)
			{
				snail = snail->next;
				cheetah = cheetah->next;
			}
			return (snail);
		}

		snail = snail->next;
		cheetah = cheetah->next->next
	}

	return (NULL);
}
