#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *My_new, *last_node;

    My_new = malloc(sizeof(listint_t));
    if (My_new == NULL)
        return (NULL);

    My_new->n = n;
    My_new->next = NULL;
    
    if (*head == NULL)
    {
        *head = My_new;
        return (My_new);
    }

    last_node = *head;
    while (last_node->next != NULL)
        last_node = last_node->next;

    last_node->next = My_new;

    return (My_new);
}
