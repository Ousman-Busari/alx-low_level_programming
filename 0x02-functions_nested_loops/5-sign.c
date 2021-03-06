#include "main.h"

/**
 * print_sign - plus or minus sign
 * @n: the argument
 *
 * Return: 1 or 0 always
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	} else if (n == 0)
	{
		_putchar('0');
		result = 0;
	} else
	{
		_putchar('-');
		result = -1;
	}
	return (result);
}
