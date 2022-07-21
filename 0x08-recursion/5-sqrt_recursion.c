#include "main.h"

int my_sqrt(int num, int root);
/**
 * _sqrt_recursion - find natural square root of a number
 * @n: number to be calculated it's natural square root if any
 * Return: natural square root of a number if any. Otherwise -1
 */
int _sqrt_recursion(int n)
{
	int i = 1;
	my_sqrt(n, i);
}

/**
 * my_sqrt - find natural square root of a number
 * @num: number to be calculated it's natural square root if any
 * @root: testing number is it is square root of the number
 * Retrun: natural square root of a number if any. Otherwise -1
 */
int my_sqrt(int num, int root)
{
	if (num / root == root)
		return (root);

	if (root * root >= num)
		return (-1);

	return (my_sqrt(num, root + 1));
}
