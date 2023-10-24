#include "lists.h"

/**
 * sum_listint - computes the sum of all the data in a listint_t list
 * @head: pointer to the first node in the linked list
 *
 * Return: The sum of all data values
 */
int sum_listint(listint_t *head)
{
	int sumof_data = 0;
	listint_t *current_node = head;

	while (current_node)
	{
		sumof_data += current_node->n;
		current_node = current_node->next;
	}

	return (sumof_data);
}

