#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a specified index in a linked list
 * @head: pointer to the first node in the linked list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the node desired or NULL if not there
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node = head;

	while (current_node && i < index)
	{
		current_node = current_node->next;
		i++;
	}

	return (current_node ? current_node : NULL);
}

