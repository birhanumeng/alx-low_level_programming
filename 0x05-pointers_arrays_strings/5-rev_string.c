#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: character pointer input.
 * Return: void.
 */
void rev_string(char *s)
{
	char *str = s;
	char tmp;

	for (; *(s + 1); )
	{
		s++;
	}
	while (str < s)
	{
		tmp = *str;
		*str = *s;
		*s = tmp;
		s--;
		str++;
	}
}
