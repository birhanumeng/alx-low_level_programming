#include "main.h"

/**
 * infinite_add - add two number using buffer size.
 * @n1: input number1.
 * @n2: input number2.
 * @r: buffer.
 * @size_r: buffer size.
 * Return: sum result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	unsigned long long num1 = n1, num2 = n2;
	unsigned long long result;
	int size = size_r;
	int count;
	
	count = 0;
	result num1 + num2;
	while ((result / 10 > 0) || (result % 10 > 0))
	{
		count++;
		result /= 10;
		if (count > size)
			return (0);
	}

	return (result);

}
