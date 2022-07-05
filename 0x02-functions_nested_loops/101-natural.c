#include <stdio.h>

/**
 * main - add multiple of 3 and 5 below 1024
 *
 * Return: return sum of mutiple of 3 and 5 below 1024
 */
int main(void)
{
	int i;
	int check;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			check = check + i;
	printf("%d\n", check);
	return (0);
}

