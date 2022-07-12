#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: character pointer input.
 * Return: void.
 */
void rev_string(char *s)
{
	char *start = s;
	char temp;

	for (; *(s + 1); )
	{
		s++;
	}
	while (start < s)
	{
		temp = *start;
		*start = *s;
		*s = temp;
		s--;
		start++;
	}
}
