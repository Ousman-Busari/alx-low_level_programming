#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: the input string
 *
 * Return: an integer
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return 0;
}
