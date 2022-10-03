#include <stdio.h>

/**
 * _atoi - converts strings to integer
 * @s: the input string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int integer = 0;
	int sign = 1;
	char skipper = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			skipper = 1;
			integer = integer * 10 + *s - '0';
		} else if (skipper)
			break;
		s++;
	}
	if (sign < 0)
		integer = (-integer);
	return (integer);
}
