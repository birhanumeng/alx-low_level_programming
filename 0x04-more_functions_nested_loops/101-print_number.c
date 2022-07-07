#include "main.h"

/**
 * print_number - prints integer.
 * @n: input.
 * Return: void.
 */
void print_number(int n)
{
	unsigned int digit, check, tmp;

	if (n < 0)
	{
		_putchar(45);
		tmp = n * -1;
	}
	else
	{
		tmp = n;
	}

	digit = tmp;
	check = 1;

	while (digit > 9)
	{
		digit /= 10;
		check *= 10;
	}

	for (; check >= 1; check /= 10)
	{
		_putchar(((tmp / check) % 10) + '0');
	}
}
