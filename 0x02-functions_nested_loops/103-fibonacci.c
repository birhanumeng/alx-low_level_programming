#include <stdio.h>

/**
  * main - prints the sum of the even-valued terms, followed by a new line.
  *
  * Return: 0 (Success)
  */
int main(void)
{
	int check;
	unsigned long fb_num;
	unsigned long i = 0;
	unsigned long j = 1;
	unsigned sum = 0;

	for (check = 0; check < 50; check++)
	{
		fb_num = i + j;
		i = j;
		j = fb_num;
		if ((fb_num % 2 == 0) && (fb_num < 4000000))
		{
			sum = sum + fb_num;
		}
	}

	printf("%lu\n", sum);
	return (0);
}

