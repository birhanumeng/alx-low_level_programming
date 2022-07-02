#include <stdio.h>

/**
 * main - Prints combination of pair numbers
 *
 * Return: rturn 0 (Success)
 */
int main(void)
{
	int j;
	int i;
	int k;
	int m;

	for (j = '0'; j <= '9'; j++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (m = '0'; m <= '9'; m++)
				{
					if ((j == i) && (i == k) && (k == m))
						continue;

					putchar(j);
					putchar(i);
					putchar(' ');
					putchar(k);
					putchar(m);

					if ((j == '9') && (i == '8') && (k == '9') && (m == '9'))
						break;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
