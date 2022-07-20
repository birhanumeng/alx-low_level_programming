#include "main.h"

/**
 * _puts_recursion - print a string using recursion
 * @s: input string
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);
	s++;
	_puts_recursion(*s);

	_putchar('\n');
}
