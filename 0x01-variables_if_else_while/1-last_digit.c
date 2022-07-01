#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry level
 * Description: print wheither a number n is negative or positive
 * Return: return 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else if (n > 0)
	{
		if (last_digit > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	else if (n < 0)
	{
		last_digit = last_digit * (-1);
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
