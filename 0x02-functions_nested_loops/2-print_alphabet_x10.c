#include "main.h"

/**
 * print_alphabet_x10 - print a string alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		_putchar('\n');
	}
}
