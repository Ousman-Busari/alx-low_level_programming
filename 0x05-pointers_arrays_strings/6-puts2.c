#include "main.h"

/**
 * puts2 - prints every other characters
 * @str: the input string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0, j, len = 0;

	while(str[i++] != '\0')
		len++;
	for (j = 0; j < len; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
