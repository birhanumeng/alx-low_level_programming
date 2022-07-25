#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size an array
 * @c: char uses for initialize to array
 * Retrun: pointer to the array, or NULL if it fail or size is zero
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	free(ptr);

	return (ptr);
}
