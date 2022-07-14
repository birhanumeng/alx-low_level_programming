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
		while ((*(s + i) >= 65 && *(s + i) <= 90) || (*(s + i) >= 97 && *(s + i) <= 122))
		{
			if ((*(s + i) >= 78 && *(s + i) <= 90) || (*(s + i) >= 110 && *(s + i) <= 122) )
                        {
				*(s + i) -= 13;
				breake;
			}
			*(s + i) += 13;
			break;
		}
		i++;	
	}

	return (s);
}
