#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints list safe
 * @head: head node
 *
 * Return: number of nodes in size_t or exit 98 if it fails
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
		exit(98);
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;

		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (count);
}
