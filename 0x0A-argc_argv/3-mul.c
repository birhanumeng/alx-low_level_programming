#include <stdio.h>

/**
 * main - Prints the program name
 * @argc: Number of arguments supplied
 * @argv: Reffers to array of strings supplied
 *
 * Return: 0 for success or 1 for failure
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
