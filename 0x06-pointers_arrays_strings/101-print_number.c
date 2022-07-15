#include "main.h"

/**
 * print_number - prints out a number to the stdout
 * @n: the input integer
 *
 * Return: nothing
 */

void print_number(int n)
{
	int expo10 = 10, div;

	if(n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	else if (n > 0 && n < 10)
		_putchar(n + '0');
	else
	{
		div = n / 10;
		while (div > 9)
		{
			div /= 10;
			expo10 *= 10;
		}
		while (expo10 >= 1)
		{
			_putchar(n / expo10 + '0');
			n %= expo10;
			expo10 /= 10;
		}
	}
}
