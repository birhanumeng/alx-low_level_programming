#include "main.h"

int my_wildcmp(char *str1, char *str2, int i, int j);
int count_wild(char *str, int count);
/**
 * wildcmp - comparing two strings with with wildcard
 * @s1: first string input
 * @s2: second string input
 * Return: 1 if the two string are identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	return (my_wildcmp(s1, s2, i, j));
}

/**
 * my_wildcmp - comparing two strings with with wildcard
 * @str1: first string
 * @str2: second string
 * @i: for traversing first string
 * @j: for traversing second string
 * Return: 1 if the two string are identical, otherwise 0
 */
int my_wildcmp(char *str1, char *str2, int i, int j)
{
	if (str1[i] == '\0' && str2[j] == '\0')
		return (1);

	if (str1[i] == str2[j])
	{
		i++;
		j++;
	}

	if (str2[j] == 42)
		j = j + count_wild(str2, j);

	if (str1[i] != str2[j] && str1[i] != '\0')
		i++;

	if ((str1[i] == '\0' && str2[j] != '\0'))
	{
		return (0);
	}

	if (|| str1[i] != str2[j] && str2[j] != 42)
		return (0);

	return my_wildcmp(str1, str2, i, j);
}

/**
 * count_wild - count number of wildcards in a string
 * @str: string to searching wildcards
 * @count: holding number wildcards
 * Return: number of wildcards
 */
int count_wild(char *str, int count)
{
	if (str[count] != 42)
		return (0);

	return (1 + count_wild(str, count + 1));
}
