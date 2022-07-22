#include <stdio.h>

/**
 * main - Prints the program name
 * @argc: Number of arguments supplied
 * @argv: Reffers to array of strings supplied
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
