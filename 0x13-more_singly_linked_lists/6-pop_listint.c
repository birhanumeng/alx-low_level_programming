#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node and returns it's data in a list
 * @head: refers to head
 *
 * Return: data value of deleted node or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	new_head = (*head)->next;
	free(*head);
	*head = new_head;

	return (data);

}
