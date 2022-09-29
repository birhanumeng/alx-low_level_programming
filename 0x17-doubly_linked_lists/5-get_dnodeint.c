#include "lists.h"

/**
 * get_dnodeint_at_index - find the a node at an index
 * @head: head of the list
 * @index: the index for searching the node
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
