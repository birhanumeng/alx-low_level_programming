#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: first string argument
 * @s2: second string argument
 * Return: pointer to concatinated array, or NULL if it fail
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int i = 0, j = 0, k = 0, m = 0;

	while (s1[i])
		i++;
	while (s2[j])
	{
		i++;
		j++;
	}
	i++;
	conc = malloc(i * sizeof(char));
	if (conc == NULL)
		return (NULL);
	if (str2 == NULL)
		str[0] = "";
	while (s1[k])
	{
		conc[k] = s1[k];
		k++;
	}
	while (s2[m])
	{
		conc[k] = s2[m];
		m++;
		k++;
	}
	conc[k] = '\0';

	return (conc);
}
