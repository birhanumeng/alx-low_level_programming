#include "lists.h"

/**
 * add_dnodeint - add a node at the beginining.
 * @head: refers to a head
 * @n: data
 * Return: the added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(struct dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (new_node);
}
