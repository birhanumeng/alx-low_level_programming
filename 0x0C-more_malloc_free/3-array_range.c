#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integer and assign value
 *               from min to max
 * @min: minimum element in the array
 * @max: max element in the array
 * Return: pointer to the created array or NULL 
 *         on fails or if min > max
 */
int *array_range(int min, int max)
{
	int *int_arr, index = 0;

	if (min > max)
		return (NULL);

	int_arr = malloc(sizeof(int) * (max - min + 1));

	for (; min <= max; min++)
	{
		int_arr[index] = min;
		index++;
	}

	return (int_arr);
}
