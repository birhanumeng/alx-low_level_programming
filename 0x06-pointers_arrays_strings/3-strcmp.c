#include "main.h"

/**
 * _strcmp - compare the strings.
 * @s1: input pointer1.
 * @s2: input pointer2.
 * Return: 0 is two strings are eqaul less than 0 if s1 is less than s2
 * greater than 0 if s1 is greater than is s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
