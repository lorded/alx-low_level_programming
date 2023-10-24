#include "lists.h"

/**
 * free_listint - frees the memory of linked list
 * @head: A pointer to the listint_t to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
		current_node = head->next;
		free(head);
		head = current_node;
	}
}

