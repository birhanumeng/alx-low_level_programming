#include "main.h"

/**
  * _memcpy - copy n bytes from src to dest memory area
  * @dest: memory that will copy to
  * @src: memory area that copy from
  * @n: amount of cpoy byte
  * Return: the dest memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
