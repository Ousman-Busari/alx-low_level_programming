#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the input decimal number
 * @index: the given index
 *
 * Return: the bit at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int checker = 0x01;

	checker <<= index;
	if (checker == 0 || index > 63)
		return (-1);
	if (checker & n)
		return (1);
	else
		return (0);
}
