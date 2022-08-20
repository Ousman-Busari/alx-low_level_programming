#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the decimal number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int in = 0, max = 9223372036854775807;

	max = ~max;
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (max)
	{
		if (in == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			in = 1;
		}
		max >>= 1;
	}
}
