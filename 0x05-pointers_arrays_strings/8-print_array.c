#include "main.h"

/**
 * print_array - prints array element.
 * @a: character pointer input.
 * @n: array size.
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		printf("%d", a[i]);
		i++;
		n--;
	}
	for (; n > 0; n--)
	{
		printf(", %d", a[i]);
		i++;
	}
	printf("\n");
}
