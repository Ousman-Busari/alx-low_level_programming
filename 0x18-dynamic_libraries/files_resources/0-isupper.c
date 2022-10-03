#include "main.h"

/**
 * _isupper - checks if a letter is uppercase
 * @c: the passed parameter
 *
 * Return: 1 if true, 0 otherwise
 */

int _isupper(int c)
{
	int result;


	if (c >= 65 && c <= 90)
		result = 1;
	else
		result = 0;
	return (result);
}
