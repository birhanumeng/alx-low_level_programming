#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 *
 * @n: input feild for checking
 * Return: return the last digit of the input number
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = n * -1;
	last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
