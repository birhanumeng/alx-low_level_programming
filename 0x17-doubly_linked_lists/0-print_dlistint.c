#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print nodes indoubly linked list.
 * @h: refers to head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		print("%d\n", h->n);
		h = h->next;
		num_node++;
	}
	return (num_node);
}
