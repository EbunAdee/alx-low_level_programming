#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list, and returns
 * the head node’s data (n).
 * @head: double pointer to head of the list
 *
 * Return: head node's data (n), or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
    int rep;
    listint_t *temp;

    if (*head == NULL)
        return (0);

    temp = *head;
    rep = (*head)->n;
    *head = (*head)->next;
    free(temp);

    return (rep);
}

