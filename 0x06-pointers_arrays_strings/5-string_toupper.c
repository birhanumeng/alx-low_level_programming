#include "main.h"

/**
 * string_toupper - convert lowercase to uppercase.
 * @str: input string.
 * Return: string converted uppercase.
 */
char *string_toupper(char *str)
{
	while (*str != 48)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str =- 32;
		}
		*str++;
	}

	return (str);
}
