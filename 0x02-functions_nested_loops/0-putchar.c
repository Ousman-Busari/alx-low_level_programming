#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: void
 */

void main(void)
{
	int i;

	char word[7] = "_putchar";
	for (i  = 0; i < 8; i++)
		_putchar(word[i]);

	_putchar('\n');
	return;
}
