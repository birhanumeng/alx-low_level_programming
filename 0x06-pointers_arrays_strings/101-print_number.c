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
		num = -num;
	}

	while (num / 10)
		_putchar((num % 10) + '0');

	_putchar((num % 10) + '0');
}
