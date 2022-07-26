#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatinate all the arguments
 * @ac: number of agruments
 * @av: array of strings
 * Return: pionter to the new string. Or NULL if ac is 0 or
 *         av is NULL or fail to allocate memory
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k = 0, len = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	s = malloc(len * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s[k++] = av[i][j];
		s[k++] = '\n';
	}
	s[k] = '\0';

	return (s);
}
