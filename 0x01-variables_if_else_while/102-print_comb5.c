#include <stdio.h>

/**
 * main - Prints combination of pair numbers
 *
 * Return: rturn 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;

	for (n1 = 0; n1 <= 98; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			putchar((n1 / 10));
			putchar((n1 % 10));
			putchar(' ');
			putchar((n2 / 10));
			putchar((n2 % 10));

			if (n1 == 98 && n2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
