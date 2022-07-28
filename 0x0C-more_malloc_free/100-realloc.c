#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated
 * @old_size: allocated space for ptr
 * @new_size: new size in byte
 * Return: pointer to new reallocated memory or NULL
 *         if new_size = 0 and ptr is not null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new = malloc(new_size);

		if (new == NULL)
			return (NULL);

		return (new);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);

	if (new == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
	{
		new[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (new);
}
