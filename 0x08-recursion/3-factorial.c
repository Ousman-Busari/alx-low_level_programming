#include "main.h"

/**
 * factorial - calculates the factorial of an interger
 * @n: the input integer
 *
 * Return: an integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
		return (n * factorial(n - 1));
}
