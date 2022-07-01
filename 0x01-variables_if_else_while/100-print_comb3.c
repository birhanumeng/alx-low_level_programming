#include <stdio.h>

/**
  * main - Prints two numbers
  *
  * Return: return 0 (Success)
  */
int main(void)
{
	int j;
	int i;

	for (j = '0'; j <= '9'; j++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (j < i)
			{
				putchar(j);
				putchar(i);

				if (j != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
