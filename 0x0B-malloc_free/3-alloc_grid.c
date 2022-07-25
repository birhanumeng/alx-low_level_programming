#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - initialize and two dimentional array
 * @width: number of columens
 * @height: number of rows
 * Return: pointer to the two dimentional array
 */
int **alloc_grid(int width, int height)
{
	int **multi_arr;
	int i, j;

	if (width < 0 || height < 0)
		return (NULL);

	multi_arr = (**int)malloc(height * sizeof(int));

	if (multi_arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			multi_arr[i][j] = 0;
		}
	}

	return (multi_arr);
}
