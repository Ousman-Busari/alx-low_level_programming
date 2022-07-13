#include "main.h"

/**
 * puts_half - prints the last half of a string
 * @str: the input string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
	{
		i = len / 2;
		for (; i < len; i++)
			_putchar(str[i]);
	} else
	{
		i = (len + 1) / 2;
		for (; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
