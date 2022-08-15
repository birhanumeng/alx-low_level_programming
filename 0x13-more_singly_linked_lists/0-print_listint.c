#include "lists.h"

/** print_listint - prints all the elements in a list
 * @h: list
 *
 * Retrun: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
