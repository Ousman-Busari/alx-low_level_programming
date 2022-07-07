#include "main.h"

/**
 * more_numbers - print from 0 to 14 ten times
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int n, j;

	for (n = 1; n <= 10; n++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
	}
	_putchar('\n');
}
