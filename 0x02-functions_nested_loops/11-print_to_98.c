#include "main.h"

/**
 * print_to_98 - main task
 * @c: starting point
 * Return: nothing
 */
void print_to_98(int c)
{
	int a, b;

	if (c <= 98)
	{
		for (a = c; a <= 98; a++)
		{
			if (a < 0)
			{
				_putchar('-');
				b = -1 * a;
				if (b >= 100)
				{
					_putchar((b / 100) + '0');
					_putchar(((b % 100) / 10) + '0');
					_putchar((b % 10) + '0');
				} else if (b > 10)
				{
					_putchar((b / 10) + '0');
					_putchar((b % 10) + '0');
				}else
					_putchar((b % 10) + '0');
			} else if (a < 10)
				_putchar(a + '0');
			else 
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) +'0');
			}
			if (a != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	} else 
	{
		for (a = c; a >= 98; a--)
		{
			if (a >= 100)
			{
				_putchar((a / 100) + '0');
				_putchar(((a % 100) / 10) + '0');
			} else 
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			if (a != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
