#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of the linked list
 * @h: points to the list_t list to print
 * Return: outputs number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t counted = 0;

	while (h)
	{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);

	h = h->next;
	counted++;
	}

	return (counted);
}

