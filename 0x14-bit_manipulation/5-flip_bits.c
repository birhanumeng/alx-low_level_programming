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
	unsigned long int num = n ^ m, bits = 0;

	while (num > 0)
	{
		bits += (num & 1);
		num >>= 1;
	}

	return (num);
}
