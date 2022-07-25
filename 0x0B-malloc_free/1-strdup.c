#include "main.h"
#include <stdlib.h>

/**
 * _strdup - create newly allocated space in memory,
 *                which contains a copy of the string given as a parameter
 * @str: original string argument
 * Return: pointer to newly created array, or NULL if it fail or
 *         input argument is NULL
 */
char *_strdup(char *str)
{
	char *new_str;

	new_str = malloc(sizeof(str));
	if (new_str == NULL || str == NULL)
		return (NULL);

	while (*str)
	{
		new_str = str;
		str++;
		new_str++;
	}

	return (new_str);
}
