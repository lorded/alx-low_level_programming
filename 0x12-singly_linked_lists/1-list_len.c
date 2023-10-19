#include <stdlib.h>
#include "lists.h"

/**
 * list_len - outputs the number of elements in the linked list
 * @h: pointer that is pointing to the list_t linked list
 *
 * Return: returns the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t ff = 0;

	while (h)
	{
	ff++;
	h = h->next;
	}
	return (ff);
}

