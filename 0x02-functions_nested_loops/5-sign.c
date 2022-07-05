#include "main.h"

/**
 * print_sign - Print sign of number
 *
 * @n: input feild for checking
 * Return: 1 if input is positive, 0 if input is 0
 *         and -1 if input is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
