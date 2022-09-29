#include "lists.h"

/**
 * dlistint_len - calculate number nodes in doubly linked list
 * @h: refers to the head
 * Return: number on nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		num_node++;
		h = h->next;
	}
	return (num_node);
}
