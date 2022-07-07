#include "main.h"

/**
 * _isdigit - check if it is a natural number
 *  @n: the input number
 *
 *  Return: Always 0 or 1
 */

int _isdigit(int n)
{
	int result;

	if (n >= 48 && n <= 58)
		result = 1;
	else
		result = 0;
	return (result);
}
