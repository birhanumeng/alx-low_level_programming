#include "main.h"

/**
 * _strncat - concatinate only characters from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes
 * Return: concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && (j < n))
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';

	return (dest);
}

