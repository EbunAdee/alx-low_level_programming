#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first element of the list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *snail = head, *cheetah = head;

	while (cheetah && cheetah->next)
	{
		printf("[%p] %d\n", (void *)snail, snail->n);
		snail = snail->next;
		cheetah	= cheetah->next->next;
		nodes++;

		if (snail >= cheetah)
		{
			printf("[%p] %d\n", (void *)snail, snail->n);
			printf("-> [%p] %d\n", (void *)cheetah, cheetah->n);
			exit(98);
		}
	}

	if (cheetah)
	{
		printf("[%p] %d\n", (void *)snail, snail->n);
		nodes++;
	}
	return (count);
}
