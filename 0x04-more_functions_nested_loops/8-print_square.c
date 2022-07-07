#include "main.h"

/**
 * print_square - row times column
 * @n: size of the sqaure
 *
 * Return: nothing
 */

void print_square(int s)
{
	int i, j;

	if (s > 0)
	{
		i = s;

		while (i > 0)
		{
			j = s;

			while (j > 0)
			{
				_putchar('#');
				j--;
			}
			_putchar('\n');
			i--;
		}
	}else
		_putchar('\n');
}
