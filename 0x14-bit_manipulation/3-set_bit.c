#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the decimal number
 * @index: the given index
 *
 * Return: 1 it it worked, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int setter =  0x1;

	setter <<= index;
	if (setter == 0 || index > 63)
		return (-1);

	*n |= setter;
	return (1);
}
