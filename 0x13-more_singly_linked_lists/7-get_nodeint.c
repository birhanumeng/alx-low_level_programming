#include "lists.h"

/**
 * get_nodeint_at_index - find the nth node in a list
 * @head: head node
 * @index: targeted index
 *
 * Return: nth node or NULL if nth node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		head = head->next;
		i++;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
