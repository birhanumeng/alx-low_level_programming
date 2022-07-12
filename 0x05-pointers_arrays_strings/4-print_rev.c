#include "main.h"

/**
 * print_rev - print string in reverse order.
 * @s: character pointer input.
 * Return: void.
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != 0)
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
