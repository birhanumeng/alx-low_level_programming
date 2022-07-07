#include <stdio.h>

/**
 * main - prints the largest prime factor.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	long int num, f;

	num = 612852475143;
	for (f = 2; f <= num; f++)
	{
		if (num % f == 0)
		{
			num /= f;
		}
	}
	printf("%ld\n", f);
	return (0);
}
