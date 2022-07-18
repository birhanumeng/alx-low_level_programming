#include "main.h"

/**
  * _memset - Fill memory byte with a constant byte
  * @s: memory that will fill
  * @b: amount of byte will fill on each memory area
  * @n: memory area to be fill
  * Return: the filled memory
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
