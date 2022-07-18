#include "main.h"

/**
 * _strstr - find and locates a substring
 * @haystack: string to be check
 * @needle: substring to be searched
 * Return: pointer to the beginning of substring, or NULL if the it is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');
}
