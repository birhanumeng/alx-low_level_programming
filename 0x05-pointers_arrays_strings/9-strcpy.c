#include "main.h"

/**
 * _strcpy - copy string and return it.
 * @dest: dest pointer.
 * @src: src pointer.
 * Return: copied value.
 */
char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
return (answer);
}
