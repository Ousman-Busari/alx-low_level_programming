#include "main.h"
int _sqrt(int i, int num);

/**
 * _sqrt_recursion - finds the naturl sqaure root of an integer
 * @n: the input integer
 *
 * Return: an integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 *_sqrt -finds the square root of positive integers
 * by iterating over all lower integers and multiply by themselves
 * @i: the interating varibale
 * @num: the input postive integer
 * Return: an integer
 */

int _sqrt(int i, int num)
{
	if (i > num)
		return (-1);
	if (i * i == num)
		return (i);
	return (_sqrt(i + 1, num));
}
