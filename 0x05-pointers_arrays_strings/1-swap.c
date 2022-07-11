#include "main.h"

/**
 * swap_int - swap values of a and b.
 * @a: pointer input1.
 * @b: pointer input2.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
