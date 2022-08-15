#include "lists.h"

/** listint_len - calculate number of elemets in a linked list
 * @h: list
 *
 * Retrun: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
