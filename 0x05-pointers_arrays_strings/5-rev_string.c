#include "main.h"

/**
 * rev_string - print string in reverse order.
 * @s: character pointer input.
 * Return: void.
 */
void rev_string(char *s)
{
	int i, j, k;
	char tmp;

	i = 0;
	k = 0;
	while (s[i] != 0)
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		tmp = s[j];
		s[k] = tmp;
		k++;

	}
}
