#include "main.h"

/**
 * cap_string - capitalize words in a string.
 * @str: input string.
 * Return: string capitalized words.
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char sep[] = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (str[i-1] == sep[j])
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
