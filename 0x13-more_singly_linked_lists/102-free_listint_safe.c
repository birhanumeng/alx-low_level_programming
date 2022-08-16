#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a list safe
 * @h: refers to head node
 *
 * Return: size of free'd list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp = NULL;

	if (h == NULL || *h == NULL)
		return (count);
	while (*h)
	{
		count++;
		if (*h > (*h)->next)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
		}
		else
		{
			free(*h);
			*h = NULL;
		}
	}
	*h = NULL;
	return (count);
}
