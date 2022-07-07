#include "main.h"

/**
 * print_diagonal - 
 * @n: number of times
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j, d = '\\';

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			j = i - 1;
			while (j)
			{
				_putchar(' ');
				j--;
			}
			_putchar(d);
			_putchar('\n');
		}
		_putchar('\n');
	} else
		_putchar('\n');
}
