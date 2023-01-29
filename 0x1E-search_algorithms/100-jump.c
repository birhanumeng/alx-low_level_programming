#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump search
 * @array: array data to be searched
 * @size: array size
 * @value: searched value
 * Return: first index value or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	/* declarations */
	int jump, i;

	/* check for null array */
	if (!array)
		return (-1);

	jump = sqrt(size);

	for (i = 0; i < (int)size && array[i] < value; i += jump)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

	printf("Value found between indexes [%d] and [%d]\n", i - jump, i);

	for (i -= jump; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	/* not in the array */
	return (-1);
}
