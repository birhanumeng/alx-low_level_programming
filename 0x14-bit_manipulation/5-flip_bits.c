#include "main.h"

/**
 * flip_bits - find number of bits needed to flip to get 
 *             from one number to another
 * @n: unsigned number
 * @m: fliped number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, check;
	unsigned int count, i;

	count = 0;
	check = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (check == (diff & check))
			count++;
		check <<= 1;
	}
	return (count);
}
