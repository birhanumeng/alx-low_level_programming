#include "main.h"

/**
 * print_most_numbers - print number from 0 to 9 except 2 and 4.
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
			_putchar(c);
	}
	_putchar('\n');
}
