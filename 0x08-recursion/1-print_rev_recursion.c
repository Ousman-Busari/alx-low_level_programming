#include "main.h"

/**
 * _puts_rev_recursion - prints a string in reverse
 * @s: the string to print in reverse
 *
 * Return: nothing than a void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
