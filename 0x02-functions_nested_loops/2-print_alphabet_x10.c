#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i <= 10)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		i++;
	}
	_putchar('\n');
}
