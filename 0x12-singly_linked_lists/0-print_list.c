#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print all the list elements in list_t list.
 * @h: refers to the staring node of the list.
 *
 * Return: The number of nodes in the list_t list.
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}
