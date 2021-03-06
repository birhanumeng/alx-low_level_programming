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
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;
	i++;
	new_str = malloc(sizeof(char) * i);
	if (new_str == NULL)
		return (NULL);

	while (str[j])
	{
		new_str[j] = str[j];
		j++;
	}
	new_str[j] = '\0';

	return (new_str);
}
