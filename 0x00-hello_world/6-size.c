#include <stdio.h>

/**
 * main - Entry point
 * Description: print size of data types
 * Return: 0 (Success)
 * /
int main (void)
{
	int a;
	long int b;
	long long int d;
	float f;
	char c;

	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(a));
	printf("Size of a long int: %d byte(s)\n", sizeof(b));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(f));

	return (0);
}
