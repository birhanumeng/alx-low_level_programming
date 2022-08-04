#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters.
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num_p;
	unsigned int i;
	int sum = 0;

	va_start(num_p, n);
	for (i = 0; i < n; i++)
		sum += va_arg(num_p, int);

	va_end(num_p);

	return (sum);
}
