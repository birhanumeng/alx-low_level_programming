#include "main.h"

/**
 * puts_half - prints second half of a string.
 * @str: character pointer input.
 * Return: void.
 */
void puts_half(char *str)
{
	int len = 0;
	char *start = str;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	len += 1;
	start += len / 2;
	while (*start != '\0')
	{
		_putchar(*(start));
		start++;
	}
	_putchar('\n');
}
