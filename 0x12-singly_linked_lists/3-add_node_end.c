#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head:  points to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x_node;
	list_t *current_node = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	x_node = malloc(sizeof(list_t));
	if (!x_node)
		return (NULL);

	x_node->str = strdup(str);
	x_node->len = len;
	x_node->new_node = NULL;

	if (*head == NULL)
	{
		*head = x_node;
		return (x_node);
	}

	while (current_node->new_node)
		current_node = current_node->new_node;

	current_node->new_node = x_node;

	return (x_node);
}

