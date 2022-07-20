#include "main.h"

/**
 * _strlen_recursion - find and print length of string
 * @s: input string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s != '\0')
	{
		return 0;
	}
	s++;
	length = 1 + _strlrn_recursion(s);

	return (length);
}
