#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints numbers passed as arguments
 * @separator: separator character between strings
 * @n: number of parameter strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *tmp;
	va_list num_p;

	va_start(num_p, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(num_p, char *);
		if (tmp)
			printf("%s", tmp);
		else
			printf("(nil)");

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num_p);
}
