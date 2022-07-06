#include "main.h"

/**
 *print_times_table - Print times table between 0 ad 15
 *
 * @n: iput feild
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int check;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			check = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (check < 10 && j != 0)
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
