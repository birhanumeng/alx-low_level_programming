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
	const list_t *temp;
	size_t n_nodes = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("[%u] ", temp->len);
		if (!temp->str)
			printf("(nil)\n");
		else
			printf("%s\n", temp->str);
		temp = temp->next;
		n_nodes++;
	}
	return (n_nodes);
}
