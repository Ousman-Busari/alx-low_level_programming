#include "main.h"

/**
 * _pow_recursion - raises the power of one integer to the other
 * @x: the base integer
 * @y: the exonent
 * Return: resulting integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
