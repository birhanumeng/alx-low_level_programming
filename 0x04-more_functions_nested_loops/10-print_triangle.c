#include "main.h"

/**
 * print_triangle - print a triangle.
 *@size: input parametre.
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j;

	if (size < 1)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
			_putchar(' ');
		for (j--; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
