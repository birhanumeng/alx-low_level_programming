#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - find the nth node in a list
 * @head: head node
 * @index: targeted index
 *
 * Return: nth node or NULL if nth node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;

	while (i < index)
	{
		if (head == NULL)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
