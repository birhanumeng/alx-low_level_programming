#include "main.h"

/**
 * _strlen - prints length of a string.
 * @s: character array input.
 * Return: number of string.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		*s++;
	}

	return len;
}
