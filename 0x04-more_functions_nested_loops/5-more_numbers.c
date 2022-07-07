#include "main.h"

/**
 * more_numbers - print number from 0 to 14 10 times.
 *
 * Return: void
 */
void more_numbers(void)
{
	char i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
