#include <stdio.h>

/**
  * main - program that prints the first 98 Fibonacci numbers
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int check;
	unsigned long fb_num;
	unsigned long i = 0;
	unsigned long j = 1;

	for (check = 0; check < 98; check++)
	{
		fb_num = i + j;
		i = j;
		j = fb_num;
		if (fb_num < 1000000000000)
		{
			printf("%lu", fb_num);
		}
		if (fb_num > 1000000000000)
		{
			printf("%lu", (fb_num / 1000000000000));
			printf("%lu", (fb_num % 1000000000000));
		}
		if (check == 98)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
