#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * @n: input feild for checking
 * Return: return the last digit of the input number
 */
int print_last_digit(int n)
{
	int last = n % 10;
	if (last < 0)
		n = (last * -1);

	_putchar(last + '0');
	return (last);
}
