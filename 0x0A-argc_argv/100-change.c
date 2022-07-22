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
	int coin = argv[1], change = 0, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1] > 0)
	{
		while (change < coin)
		{
			if ((change + 25) <= coine)
			{
				change += 25;
				count++;
			}
			else if ((change + 10) <= coine)
			{
				change += 10;
				count++;
			}
			else if ((change + 5) <= coine)
			{
				change += 5;
				count++;
			}
			else if ((change + 2) <= coine)
			{
				change += 2;
				count++;
			}
			else
			{
				change += 1;
				count++;
			}
		}
	}

	printf("%d\n", count);

	return (0);
}
