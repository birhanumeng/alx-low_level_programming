#include "main.h"

int my_prime_number(int num, int test);
/**
 * is_prime_number - check is the number is prime number
 * @n: number to be checked if it is prime number
 * Return: 1 if input number is prime, otherwise 0
 */
int is_prime_number(int n)
{
	int i = 2;

	return (my_prime_number(n, i));
}

/**
 * my_prime_number - check is the number is prime number
 * @num: number to be checked for prime number
 * @test: testing number to checking if a number is prime number
 * Return: 1 if a number is prime number otherwise 0
 */
int my_prime_number(int num, int test)
{
	if (num < 2)
		return (0);

	if (num % test == 0)
		return (0);

	if (2 * test >= num)
		return (1);

	return (my_prime_number(num, test + 1));
}
