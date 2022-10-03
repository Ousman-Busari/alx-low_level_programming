#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the pinter to the character
 *
 * Return: Always an integer
 */

int _strlen(char *s)
{
	int counter = 0, i = 0;
	char c;

	c = s[0];
	while (c)
	{
		++counter;
		++i;
		c = s[i];
	}
	return (counter);
}
