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
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
