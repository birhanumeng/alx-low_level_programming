#include "main.h"

/**
 * print_rev - print string in reverse order.
 * @s: character pointer input.
 * Return: void.
 */
void print_rev(char *s)
{
	int str_arr[], i;

	i = 0;
	while (*s != 0)
	{
		str_arr[i] = *s;
		*s++;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str_arr[j]);
	}
	_putchar('\n');
}
