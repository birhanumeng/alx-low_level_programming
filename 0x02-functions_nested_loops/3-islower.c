#include "main.h"

/**
 * _islower - check if the input alphabet is lower case
 *
 * @c: input feild
 * Return: 1 (Success), 0 (Fail)
 */
int _islower(int c)
{
	if ((c > 96) && (c < 123))
		return (1);
	return (0);
}
