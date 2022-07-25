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
	int i = 0;

	while (str[i])
		i++;
	new_str = malloc((sizeof(char) * i) + 1);
	if (new_str == NULL || str == NULL)
		return (NULL);

	while (*str)
	{
		new_str = str;
		str++;
		new_str++;
	}
	new_str = '\0';

	return (new_str);
}
