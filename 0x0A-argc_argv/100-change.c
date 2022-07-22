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
	int coine = atoi(argv[1]), change = 0, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) > 0)
	{
		while (change < coine)
		{
			count++;
			if ((change + 25) <= coine)
			{
				change += 25;
			}
			else if ((change + 10) <= coine)
			{
				change += 10;
			}
			else if ((change + 5) <= coine)
			{
				change += 5;
			}
			else if ((change + 2) <= coine)
			{
				change += 2;
			}
			else
			{
				change += 1;
			}
		}
	}

	printf("%d\n", count);

	return (0);
}
