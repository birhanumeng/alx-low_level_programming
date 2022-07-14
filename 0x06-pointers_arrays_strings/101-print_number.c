#include "main.h"

/**
 * print_number - print integer.
 * @n: input number.
 * Return: nothing.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while ((n / 10 > 0) || (n % 10 > 0))
	{
		n = n / 10;
		_putchar(n % 10 + '\0');
	}

	_putchar('\n');
}
