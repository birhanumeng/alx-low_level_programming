#include "main.h"

/**
 * rev_string - print string in reverse order.
 * @s: character pointer input.
 * Return: void.
 */
void rev_string(char *s)
{
	int i, j, k;
	char *rev, tmp;

	i = 0;
	k = 0;
	while (s[i] != 0)
	{
		rev[i] = s[i];
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		s[k] = rev[j];
		k++;

	}
}
