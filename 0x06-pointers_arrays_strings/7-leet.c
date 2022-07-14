#include "main.h"

/**
 * leet - encodes a string to 1337.
 * @s: input string.
 * Return: encoded string.
 */
char *leet(char *s)
{
	int i = 0, j;
	char c[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	while (*(s + i))
	{
		for (j = 0; j < 10; j++)
		{
			if (*(s + i) == c[j])
				*(s + i) = num[j];
		}
		i++;
	}

	return (s);
}
