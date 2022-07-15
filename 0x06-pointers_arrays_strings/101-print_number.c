#include "main.h"

/**
 * print_number - prints out a number to the stdout
 * @n: the input integer
 *
 * Return: nothing
 */

void print_number(int n)
{
	int expo10 = 10, div = n / 10;

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
	_putchar('\n');
}
