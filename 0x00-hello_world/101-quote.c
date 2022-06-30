#include <stdio.h>

/**
 * main - Entry point
 * Description: print string to standard error
 * Return: return 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);

	return (1);
}

