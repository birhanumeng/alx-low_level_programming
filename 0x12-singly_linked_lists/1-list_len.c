#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @h: pointer to the start of the linked list
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int num_element = 0;

	while (h)
	{
		num_element++;
		h = h->next;
	}

	return (num_element);
}
