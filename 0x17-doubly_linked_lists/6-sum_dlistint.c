#include "lists.h"

/**
 * sum_dlistint - sum the elements in the list
 * @head: head node
 * Retrun: sum of elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
