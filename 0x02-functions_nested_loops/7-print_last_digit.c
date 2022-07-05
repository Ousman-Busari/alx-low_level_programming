#include "main.h"

/**
 * print_last_digit - last digit
 * @c: the number
 *
 * Return: last digit of the number
 */

int print_last_digit(int c)
{
	int result;

	if (c < 0)
		result = -1 * (c % 10);
	else
		result = c % 10;
	_putchar(result);
	return (result);
}
