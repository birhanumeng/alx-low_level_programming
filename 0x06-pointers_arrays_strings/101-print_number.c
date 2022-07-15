#include "main.h"

/**
 * print_number - print integer.
 * @n: input number.
 * Return: nothing.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num *= -1;
	}

	while ((num / 10 > 0) || (num % 10 > 0))
	{
		num = num / 10;
		_putchar(num % 10 + '\0');
	}
}
