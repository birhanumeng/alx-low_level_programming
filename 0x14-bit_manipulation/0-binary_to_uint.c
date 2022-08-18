#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: refers a binary number
 *
 * Return: unsigned decimal number, or 0 if b is NULL or
 *         if b contain non 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num <<= 1;
		if (b[i] == '1')
			num += 1;
	}
	return (num);
}
