#include "main.h"

/**
 * print_rev - prints strings in reverse order
 * @str: the input string
 *
 * Return: nothing
 */

void print_rev(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	while (len)
		_putchar(str[--len]);
	_putchar('\n');
}
