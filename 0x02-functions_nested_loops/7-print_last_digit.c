#include "main.h"

/**
 * print_last_digit - last digit
 * @c: the number
 *
 * Return: last digit of the number
 */

int print_last_digit(int c)
{
	char result;

	result = c % 10;
	_putchar(result);
	return (result);
}
