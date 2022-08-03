#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the opcodes of the program
 * @argc: number of arguments
 * @argv: refers to string array
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;
	unsigned char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < (atoi(argv[1]) - 1); i++, ptr++)
	{
		printf("%02x ", *ptr);
	}
	printf("%02x\n", *ptr);
	return (0);
}
