#include <stdio.h>

/**
 * main - Entry point
 * Description: print string to standard error
 * Return: return 0 (Success)
 */
int main(void)
{
	fwrite("and that piece of art is useful\"", 32, 1, stderr);
	fwrite(" - Dora Korpar, 2015-10-19\n", 27, 1, stderr);

	return (1);
}

