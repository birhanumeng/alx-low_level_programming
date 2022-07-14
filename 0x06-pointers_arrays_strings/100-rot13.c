#include "main.h"

/**
 * leet - encodes a string using rot13.
 * @s: input string.
 * Return: encoded string.
 */
char *rot13(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if ((*(s + i) >= 65 && *(s + i) <= 90) || (*(s + i) >= 97 && *(s + i) <= 122) )
			*(s + i) += 13;
	       i++	
	}

	return (s);
}
