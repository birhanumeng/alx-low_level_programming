#include "main.h"

/**
 * print_rev - print string in reverse order.
 * @s: character pointer input.
 * Return: void.
 */
void print_rev(char *s)
{
	char *str;
	int i, j;

	i = 0;
	while (*s != 0)
	{
		str = *s;
		s++;
		str++;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(*(str+j));
	}
	_putchar('\n');
}
