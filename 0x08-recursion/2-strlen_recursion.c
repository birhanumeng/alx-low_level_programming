#include "main.h"

/**
 * _strlen_recursion - find and print length of string
 * @s: input string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		s++;
		_strlen_recursion(s);
	}

	return (length);
}
