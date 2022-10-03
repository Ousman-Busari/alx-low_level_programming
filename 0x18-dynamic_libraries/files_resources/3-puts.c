#include "main.h"

/**
 * _puts - prints string to the standard output
 * @str: the string to print
 *
 * Return: nothing
 */

void _puts(char *str)
{
	char c;
	int i;

	c = str[0];
	i = 0;
	while (c)
	{
		_putchar(c);
		++i;
		c = str[i];
	}

	_putchar('\n');
}
