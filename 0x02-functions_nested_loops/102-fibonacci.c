#include <stdio.h>

/**
  * main - program that prints the first 50 Fibonacci numbers
  *
  * Return: 0 (Success)
  */
int main(void)
{
	unsigned long check;
	unsigned long fb_num;
	unsigned long i = 0;
	unsigned long j = 1;

	for (check = 0; check < 50; check++)
	{
		fb_num = i + j;
		i = j;
		j = fb_num;
		printf("%lu", fb_num);
		if (check == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
