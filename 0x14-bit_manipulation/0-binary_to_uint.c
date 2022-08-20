#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number
 *
 * Return: unsigned decimal of the binary number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, base = 1, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (; len >= 1; len--)
	{
		if (b[len - 1] == '1')
			dec += base;
		base *= 2;
	}
	return (dec);
}
