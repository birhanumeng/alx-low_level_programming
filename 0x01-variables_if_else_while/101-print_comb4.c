#include <stdio.h>

/**
  * main - Prints three numbers
  *
  * Return: return 0 (Success)
  */
int main(void)
{
	int j;
	int i;
	int k;

	for (j = '0'; j <= '9'; j++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (j < i && i < k)
				{
					putchar(j);
					putchar(i);
					putchar(k);

					if (j != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
