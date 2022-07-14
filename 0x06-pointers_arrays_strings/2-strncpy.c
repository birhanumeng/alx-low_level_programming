#include "main.h"

/**
 * _strncpy - concatinate only n byte characters from src in to strating
 *            from first index of dest. If src less than n, dest will
 *            filled with null character.
 * @dest: destination pointer.
 * @src: source pointer.
 * @n: number of bytes.
 * Return: concatinated string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
