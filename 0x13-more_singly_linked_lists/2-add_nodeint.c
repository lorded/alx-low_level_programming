#include "lists.h"

/**
 * add_nodeint - inserts new node at the beginning of a linked list
 * @head: A pointer to the first node in the list
 * @n: The data to be inserted into the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

