#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of first and second integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: subtract second integer from second integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: multiply first and second integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: division of first by second integer
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of first integer by second integer
 */

int op_mod(int a, int b)
{
	return (a % b);
}
