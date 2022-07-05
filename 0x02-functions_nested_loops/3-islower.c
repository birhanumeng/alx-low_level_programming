#include "main.h"

/**
 * _islower - print 1 if alphabet is lowercase otherwise 0
 *
 * Return: 1 (Success), 0 (Fail)
 */
int _islower(int c)
{
	if ((c > 96) && (c < 123))
		return (1);
	return (0);
}
