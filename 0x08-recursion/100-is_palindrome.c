#include "main.h"

int my_palindrome(char *str, int i, int j);
int my_strlen(char *str, int len);
/**
 * is_palindrome - check is the string is palindrome
 * @s: string to be checked if it is palindrome
 * Return: 1 if a string is palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int i = 0, len = 0, j;

	j = my_strlen(s, len);

	return (my_palindrome(s, i, j));
}

/**
 * my_palindrome - check if a string is palindrome
 * @str: string to be checked for palindrome
 * @i: for traversing string from star point of a string
 * @j: for traversing string from last point of a string
 * Return: 1 if a string is palindrome, otherwise 0
 */
int my_palindrome(char *str, int i, int j)
{
	if (str[i] != str[j])
		return (0);

	if ((i + 1) >= j)
		return (1);

	return (my_palindrome(str, i + 1, j - 1));
}

/**
 * my_strlen - find length of a string
 * @str: string to be find it's length
 * @len: holding length of a string
 * Return: length of a string
 */
int my_strlen(char *str, int len)
{
	if (str[len] != '\0')
		my_strlen(str, len + 1);

	return (len);
}
