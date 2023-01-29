#include "search_algos.h"

/**
 * linear_search - linear search
 * @array: array data to search
 * @size: array size
 * @value: searched element
 * Return: first index value or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);

	}
	return (-1);

}
