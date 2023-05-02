#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to a pointer to the first node of the list
 * @idx: index of the list where the new node should be added. Index starts at 0
 * @n: the value to be added in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int node = 0;
    listint_t *My_new, *temp;

    if (head == NULL)
        return (NULL);

    My_new = malloc(sizeof(listint_t));
    if (My_new == NULL)
        return (NULL);

    My_new->n = n;
    if (idx == 0)
    {
        My_new->next = *head;
        *head = My_new;
        return (My_new);
    }

    temp = *head;
    while (temp != NULL)
    {
        if (node == idx - 1)
        {
            My_new->next = temp->next;
            temp->next = My_new;
            return (My_new);
        }
        node++;
        temp = temp->next;
    }

    free(My_new);
    return (NULL);
}

