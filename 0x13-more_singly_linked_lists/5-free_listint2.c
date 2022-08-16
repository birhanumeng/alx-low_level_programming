#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -  frees a list.
 * @head: refers to head node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head)
	{
		next = *head->next;
		free(*head);
		*head = next;
	}
}
