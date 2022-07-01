#include <stdio.h>

/**
  * main - Print a number followed by a comma and space
  *
  * Return: return 0 (Success)
  */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
