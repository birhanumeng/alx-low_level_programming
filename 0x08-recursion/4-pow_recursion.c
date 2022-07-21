#include "main.h"

/**
 * _pow_recursion - calculate base number raised to the power of exponent
 * @x: base number
 * @y: exponent number
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));
}
