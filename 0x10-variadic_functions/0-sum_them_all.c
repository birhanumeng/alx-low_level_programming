#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all it parameters
 * @n: number of parameters
 * @...: different paramaters of the function
 * 
 * Return: sum of the parameters or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
