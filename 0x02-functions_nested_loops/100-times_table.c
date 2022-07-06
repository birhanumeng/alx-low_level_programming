#include "main.h"
/**
 *print_times_table - Print times table between 0 ad 15
 *
 * @n: iput feild
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, check;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			check = (i * j);
			if (check < 10 && j !=)
			{
				_putchar(' ');
				_putchar(check + '0');
			}
			else if (check >= 100)
			{
				_putchar((check / 100) + '0');
				_putchar(((check % 100) / 10) + '0');
				_putchar(((check % 100) % 10) + '0');
			}
			else if ((check >= 10) && (check < 100))
			{
				_putchar((check / 10) + '0');
				_putchar((check % 10) + '0');
			}
			else
			{
				_putchar((check % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
