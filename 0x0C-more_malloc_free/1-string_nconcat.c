#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatinate n bytes of string s1 to s1
 * @s1: base string
 * @s2: string to add into s1
 * @n: number of byte
 * Return: pointer to caoncatinated string or NULL on fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, size, k;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[j] && j <= n)
		j++;

	size = i + j + 1;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		str[k] = s1[k];

	for (k = 0; k < n && s2[k]; k++)
		str[i++] = s2[k];

	str[i] = '\0';

	return (str);
}
