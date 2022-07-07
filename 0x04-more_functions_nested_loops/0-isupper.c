#include "main.h"

/**
 * _isupper - checks if input character is an uppercase.
 * @c: input character.
 * Return: 1 if input is upercase otherwise 0.
 */
int _isupper(int c)
{
	if ( c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
