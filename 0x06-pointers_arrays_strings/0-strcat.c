#include "main.h"

/**
 * _strcat - concatinate string src to dest
 * @dest: destination pointer
 * @src: source pointer
 * Return: concatinated string
 */
char *_strcat(char *dest, char *src)
{
	char *res = NULL;
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		res[i] = dest[i];
		i++;
	}
	while (src[j] != '\0')
	{
		res[i] = src[j];
		i++;
		j++;
	}
	res[i] = '\0';
	dest = res;

	return dest;
}
