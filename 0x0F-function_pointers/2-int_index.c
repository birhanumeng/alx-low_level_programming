#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: array size
 * @cmp: pointer to actual function that used to compare values
 *
 * Return: index of the first element match in the array or -1
 *         if no element matchs or size is less than 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array !== NULL && size > 0 && cmp != NULL)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
				return (index);
		}
	}

	return (-1);
}
