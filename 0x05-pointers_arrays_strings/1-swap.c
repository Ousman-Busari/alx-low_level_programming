#include "main.h"

/**
 * swap_int - swap the value of two integers by references
 * @a: the first integer
 * @b: the second integer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
