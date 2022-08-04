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
	va_list *num_param;
	int i, sum = 0;

	va_start(num_param, n);
	for (i = 0; i < n; i++)
		sum += num_param[i];

	return (sum);
}
