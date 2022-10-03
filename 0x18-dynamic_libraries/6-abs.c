#include "main.h"

/**
 * _abs - main fucntion to print absolute value
 * @c: argument / parameter value
 *
 * Return:  absolute value
 */

int _abs(int c)
{
	int result;

	if (c < 0)
		result = -1 * c;
	else
		result = c;
	return (result);
}
