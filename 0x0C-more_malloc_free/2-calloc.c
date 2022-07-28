#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of each element in byte
 * Return: pointer to the allocated memory or NULL
 *         on fails or if nmemb or size become 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem_arr = malloc(nmemb * size);
	if (mem_arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		mem_arr[i] = '\0';

	return (mem_arr);
}
