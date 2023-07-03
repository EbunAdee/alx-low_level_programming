#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dupli;
	int len;
	list_t *newnode, *lastnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	dupli = strdupli(str);
	if (str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newnode->str = dupli;
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;

	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}

	return (*head);
}
