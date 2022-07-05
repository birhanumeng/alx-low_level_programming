#include "main.h"

/**
 * __isalpha - check if the input is English alphabet
 *
 * @c: input feild for checking
 * Return: 1 if input is alphabet otherwise 0
 */
int _isalpha(int c)
{
	if (((c > 96) && (c < 123)) || ((c > 64) && (c < 91)))
		return (1);
	return (0);
}
