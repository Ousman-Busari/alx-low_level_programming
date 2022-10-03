#include "main.h"

/**
 * _isdigit - check if it is a natural number
 *  @n: the input number
 *
 *  Return: i if true, 0 otherwise
 */

int _isdigit(int n)
{
	int result;

	if (n >= 48 && n <= 57)
		result = 1;
	else
		result = 0;
	return (result);
}
