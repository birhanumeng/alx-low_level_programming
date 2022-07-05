#include "main.h"

/**
 * times_table - prints time tables
(*
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int check;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			check = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((check < 10) && (j != 0))
			{
				_putchar(' ');
				_putchar((check % 10) + '0');
			}
			else if (check >= 10)
			{
				_putchar((check / 10) + '0');
				_putchar((check % 10) + '0');
			}
			else
				_putchar((check % 10) + '0');
		}
		_putchar('\n');
	}
}
