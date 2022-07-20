#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse using recursion
 * @s: input string
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		s++;
		_print_rev_recursion(s);
	}

	if (i >= 0)
	{
		_putchar(*(s + i));
		i--;
		_print_rev_recursion(s);
	}
}
