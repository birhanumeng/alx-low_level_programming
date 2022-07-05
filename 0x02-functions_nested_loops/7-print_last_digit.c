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

	last_digit = n % 10;
	return (last_digit);
}
