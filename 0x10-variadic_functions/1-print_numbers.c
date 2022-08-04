#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers passed as arguments
 * @separator: separator character between number
 * @n: number parameters
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int tmp;
	va_list num_p;

	va_start(num_p, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(num_p, int);
		printf("%d", tmp);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num_p);
}
