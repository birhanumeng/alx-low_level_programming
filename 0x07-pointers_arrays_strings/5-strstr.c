#include "main.h"

/**
 * _strstr - find and locates a substring
 * @haystack: string to be check
 * @needle: substring to be searched
 * Return: pointer to the beginning of substring, or NULL if the it is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return ('\0');
}
