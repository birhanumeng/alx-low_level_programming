#include "lists.h"

/**
 * find_listint_loop - find a loop in a list
 * @head: head node
 *
 * Return: the address where loop starts or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp, *lo_start;

	if (head == NULL)
		return (NULL);
	tmp = head;
	lo_start = head;
	while (lo_start->next && lo_start->next->next)
	{
		lo_start = lo_start->next->next;
		tmp = tmp->next;
		if (lo_start == tmp)
		{
			tmp = head;
			while (tmp != lo_start)
			{
				tmp = tmp->next;
				lo_start = lo_start->next;
			}
			return (lo_start);
		}
	}
	return (NULL);
}
