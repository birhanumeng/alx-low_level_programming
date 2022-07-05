#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print numbers from input number to 98
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n >= 98; n--)
			printf("%d, ", n);
		printf("\n");
	}
	else
	{
		for (n = n; n <= 98; n++)
			printf("%d, ", n);
		printf("\n");
	}
}
