#include "main.h"

/**
  * _strchr - locates a character in a string
  * @dest: character sting which a character is searching from
  * @c: searching character
  * Return: pointer to the found character
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
