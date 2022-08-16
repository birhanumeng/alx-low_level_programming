#include "lists.h"

/**
 * sum_listint - sum all the data of a list
 * @head: head node
 *
 * Return: sum all data in the list or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
