#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: Pointer pointing to the list_t linked list
 * @str: shows new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *x_node;
	unsigned int len = 0;

	while (str[len])
	len++;

	x_node = malloc(sizeof(list_t));
	if (!x_node)
	return (NULL);

	x_node->str = strdup(str);
	x_node->len = len;
	x_node->next = (*head);
	(*head) = x_node;

	return (*head);
}

