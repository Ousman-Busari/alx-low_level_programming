#include "main.h"

/**
 * print_times_table - multiplication table
 *@m: the multiplication table of the integer where to stop
 *
 * Return: Nothing
 */

void print_times_table(int m)
{
	int a, i, n;

	if (m >= 0 && m <= 15)
	{

		for (a = 0; a <= m; a++)
		{
			for (i = 0; i <= m; i++)
			{
				n = a * i;
				if (n < 10)
				{
					if (i != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(n + '0');
					if (i != m)
					{
						_putchar(',');
						_putchar(' ');
					}
	
				} else
				{
					if (n < 100)
					{
						_putchar(' ');
						_putchar((n / 10) + '0');
					} else
					{
						_putchar((n / 100) + '0');
						_putchar(((n % 100) / 10) + '0');
					}
					_putchar((n % 10) + '0');
					if (i != m)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
