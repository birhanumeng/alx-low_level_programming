#include "lists.h"
#include <stdlib.h>

/** free_listint2 - frees a list
 * @head: refer to head node
 *
 * Retrun: nothing
 */
void void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = *head->next;
	}
}
