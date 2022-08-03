#include "function_pointers.h"

/**
 * print_name - prints a name passed as arguments
 * @name: name to be printed
 * @f: pointer to actual function that print a name
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
