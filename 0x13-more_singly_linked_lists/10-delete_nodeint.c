#include "lists.h"

/**
 * delete_nodeint_at_index - removes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to br deleted
 *
 * Return: 1 (Success) if node is deleted, or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *nodeto_bedeleted = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!current_node || !(current_node->next))
			return (-1);
		current_node = current_node->next;
		i++;
	}


	nodeto_bedeleted = temp->next;
	nodeto_bedeleted->next = nodeto_bedeleted->next;
	free(nodeto_bedeleted);

	return (1);
}

