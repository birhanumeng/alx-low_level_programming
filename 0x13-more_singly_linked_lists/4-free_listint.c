#include "lists.h"
#include <stdlib.h>

/** free_listint - frees a list
 * @head: head node
 *
 * Retrun: nothing
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
