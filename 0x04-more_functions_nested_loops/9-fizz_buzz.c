#include <stdio.h>

/**
 * main - Fizz-Buzz
 * Return: 0 (Success)
 */
int main(void)
{
	int i;


	i = 1;
	printf("%d", i);
	for (i = 2; i < 101; i++)
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
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
