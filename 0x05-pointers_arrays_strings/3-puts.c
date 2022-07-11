#include "main.h"

/**
 * _puts - print string using _putchar(char c).
 * @str: character pointer.
 * Return: void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putcahr('\n');
}
