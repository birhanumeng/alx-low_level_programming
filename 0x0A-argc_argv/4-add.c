#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the program name
 * @argc: Number of arguments supplied
 * @argv: Reffers to array of strings supplied
 *
 * Return: 0 for success or 1 for failure
 */
int main(int argc, char *argv[])
{
	int n, dig, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (dig = 0; argv[n][dig]; dig++)
		{
			if (argv[n][dig] < 48 || argv[n][dig] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
