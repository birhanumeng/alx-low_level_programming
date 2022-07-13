#include "main.h"

/**
 * cap_string - capitalize words in a string.
 * @str: input string.
 * Return: string capitalized words.
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			i++;
		if (str[i - 1] == ' ' ||
		    str[i - 1] == '\t' ||
		    str[i - 1] == '\n' ||
		    str[i - 1] == ',' ||
		    str[i - 1] == ';' ||
		    str[i - 1] == '.' ||
		    str[i - 1] == '!' ||
		    str[i - 1] == '?' ||
		    str[i - 1] == '"' ||
		    str[i - 1] == '(' ||
		    str[i - 1] == ')' ||
		    str[i - 1] == '{' ||
		    str[i - 1] == '}' ||
		    i == 0)
		{
			str[i] =- 32;
		}
		i++;
	}

	return (str);
}
