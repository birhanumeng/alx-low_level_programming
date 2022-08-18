#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: refers to the bit
 * @index: the index
 *
 * Return: 1 or -1 f an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
