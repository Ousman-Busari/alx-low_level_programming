#include "main.h"

/**
 * print_line - to do task
 * @n: number of underscore character- determines the length of the line
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i = '_';

	if (n > 0)
	{
		while (n > 0)
		{
			_putchar(i);
			n--;
		}
	} else
		_putchar('\n');
}
