#include "main.h"

/**
 * print_triangle - print a triangle
 * @n: size of the trinagle
 *
 * Return: nothing
 */

void print_triangle(int n)
{
	int i, j, k, l;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			j = l = n - i;
			for (; j > 0; j--)
				_putchar(' ');
			for (k = n - l; k > 0; k--)
				_putchar('#');
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
