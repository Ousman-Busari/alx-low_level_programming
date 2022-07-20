#include "main.h"
int div_within_lower_half(int num, int lower_half);

/**
 * is_prime_number - returns 1 if an integer is a prime numner, 0 otherwise
 * @n: inut integer
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int lower_half = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (div_within_lower_half(n, lower_half));
}

/**
 * div_within_lower_half - finds if there is a number that can divide an integer
 * within it's first half value
 * @n: the input integer
 * @lower_half: the lower half region of the input integer
 * Return: 0 if there's a number, 1 otherwise
 */

int div_within_lower_half(int n, int lower_half)
{
	if (lower_half > n / 2)
		return (1);
	if (n % lower_half == 0)
		return (0);
	return (div_within_lower_half(n, lower_half + 1));
}
