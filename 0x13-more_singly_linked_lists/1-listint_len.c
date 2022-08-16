#include "lists.h"

/**
 * listint_len -  calculate number of elements in a list
 * @h: list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
