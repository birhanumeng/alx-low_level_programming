#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node at given index
 * @head: referes to head node
 * @idx: index at which a new node must added
 * @n: data value
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int index = 0;

	if (head == NULL)
		return (NULL);
	while (index < (idx - 1))
	{
		*head = (*head)->next;
		index++;
		if (*head == NULL)
			return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (index == 1)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	else if ((*head)->next == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		(*head)->next = new_node;
	}
	else
	{
		new_node->n = n;
		new_node->next = (*head)->next;
		(*head)->next = new_node;
	}

	return (new_node);
}
