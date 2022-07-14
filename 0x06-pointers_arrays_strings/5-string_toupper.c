#include "main.h"

/**
 * string_toupper - convert lowercase to uppercase.
 * @str: input string.
 * Return: string converted uppercase.
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) >= 'a' && *str <= 'z')
		{
			*(str + i) -= 32;
		}
		i++;
	}

	return (str);
}
