#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size
 * Return: pointer to the allocated memory or terminate with
 *         exit status values of 98
 */
void *malloc_checked(unsigned int b)
{
	void * ptr;

	ptr = malloc(b);
	if (ptr = NULL)
	{
		exit(98);
	}

	return (ptr);
}
