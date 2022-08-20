#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the given number
 * @index: the given index
 *
 * Return: 1 if successful, -1 otherwise;
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cancel =  0x1;

	cancel = ~(cancel << index);

	if (cancel == 0 || index > 63)
		return (-1);
	*n &= cancel;
	return (1);
}
