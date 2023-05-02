#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *My_new;

    My_new = malloc(sizeof(listint_t));
    if (My_new == NULL)
        return (NULL);

    My_new->n = n;
    My_new->next = *head;
    *head = My_new;

    return (My_new);
}

