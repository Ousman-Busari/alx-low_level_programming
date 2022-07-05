#include "main.h"

/**
 * _islower - determine lower or upper case character
 * c - the input the test it to be carried out on
 * Return: 1 or 0
 */

int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 1220)
		result = 1;
	else
		result = 0;
	return(result);
}
