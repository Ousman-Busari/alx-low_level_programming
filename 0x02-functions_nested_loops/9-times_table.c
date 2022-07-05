#include "main.h"

/**
 * times_table - multiplication table
 *
 * Return: Nothing
 */

void times_table(void)
{
	int a, i, n;

	for (a = 0; a <= 9; a++)
	{
		for (i = 0; i <= 9; i++)
		{
			n = a * i;
			if (n == 0)
			{
				_putchar(n + '0');
				if (i != 9)
				{
					_putchar(',');
					_putchar(' ');
				}

			} else
			{
				if (n < 10)
					_putchar(' ');
				else
					_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				if (i != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
