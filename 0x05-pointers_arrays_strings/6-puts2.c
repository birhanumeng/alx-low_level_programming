#include "main.h"

/**
 * rev_string - prints every other character.
 * @str: character pointer input.
 * Return: void.
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
		if (*str)
		str++;
	}
	_putchar('\n');
}
