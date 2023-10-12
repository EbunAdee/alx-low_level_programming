#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n) of list
 * @head: a pointer to the head of the list
 * Return: the sum of data(n)
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
