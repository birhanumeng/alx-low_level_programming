#include <stdio.h>

/**
 * main - Fizz-Buzz
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; 1 < 101; i++)
	{
		if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
