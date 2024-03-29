#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_int(va_list i);
void print_float(va_list f);
void print_char(va_list c);
void print_str(va_list s);

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"f", print_float},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (*(p[j].t) == format[i])
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}

/**
 * print_int - prints an int
 * @i: integer to be printed
 *
 * Return: void
 */
void print_int(va_list i)
{
        printf("%d", va_arg(i, int));
}

/**
 * print_float - prints a float
 * @f: float to be printed
 *
 * Return: void
 */
void print_float(va_list f)
{
        printf("%f", va_arg(f, double));
}

/**
 * print_char - print a char
 * @c: char to be printed
 *
 * Return: void
 */
void print_char(va_list c)
{
        printf("%c", va_arg(c, int));
}

/**
 * print_str - prints a string
 * @s: string to be printed
 *
 * Return: void
 */
void print_str(va_list s)
{
        char *str = va_arg(s, char *);

        if (str == NULL)
                str = "(nil)";
        printf("%s", str);
}
