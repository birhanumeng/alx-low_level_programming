#include "main.h"

/**
 * _strcat - concatinate string src to dest
 * @dest: destination pointer
 * @src: source pointer
 * Return: concatinated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i++])
	{
		;
	}
	while (src[j])
	{
		dest[i++] = src[j++];
	}

	return (dest);
}
