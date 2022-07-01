#include <stdio.h>
/**
 * main - Prints the alphabetic in lower then upper
 *
 * Return: rturn 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
        	putchar(c);

	putchar('\n');

	return (0);
}

