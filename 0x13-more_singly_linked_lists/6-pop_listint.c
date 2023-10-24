#include "lists.h"

/**
 * pop_listint - Removes the first node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data contained in the node that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int popped_number;

	if (!head || !*head)
		return (0);

	popped_number = (*head)->n;
	current_node = (*head)->next;
	free(*head);
	*head = current_node;

	return (popped_number);
}

