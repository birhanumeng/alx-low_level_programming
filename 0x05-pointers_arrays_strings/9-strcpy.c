#include "main.h"

/**
 * _strcpy - copy string and return it.
 * @dest: dest pointer.
 * @src: src pointer.
 * Return: copied value.
 */
char *_strcpy(char *dest, char *src)
{
	char *result = dest;

	while (*src != '\0')
	{
		*dest = (char *)*src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
