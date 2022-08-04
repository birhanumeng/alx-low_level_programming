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
	va_list num_param;
        unsigned int i;
        int sum = 0;

        if (n == 0)
                return (0);

        va_start(num_param, n);
        for (i = 0; i < n; i++)
                sum += va_arg(num_param, int);

        va_end(num_param);

        return (sum);
}
