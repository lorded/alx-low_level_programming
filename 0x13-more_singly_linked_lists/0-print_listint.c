#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list of listint_t
 * @h:  A pointer to the head of the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t no_ofnodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		no_ofnodes++;
		h = h->next;
	}

	return (no_ofnodes);
}

