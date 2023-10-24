#include "lists.h"

/**
 * listint_len - counts the number of nodes in a linked lists
 * @h: Pointer to the linked list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t no_ofnodes = 0;

	while (h)
	{
		no_ofnodes++;
		h = h->next;
	}

	return (no_ofnodes);
}

