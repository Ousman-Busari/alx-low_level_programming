#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 *Return: 0 if big endian, 0 if litle endian
 */

int get_endianness(void)
{
	unsigned int bit = 1;
	char *c = (char *)&bit;

	if (*c)
		return (1);
	return (0);
}
