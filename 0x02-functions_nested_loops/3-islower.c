#include "main.h"

/**
 * _islower - determine lower or upper case character
 * return 1 if uppercase, 0 otherwise
 * Return: 1 or 0
 */

int _islower(int c)
{
	int result;

	if (c >= 65 && c <= 90)
		result = 0;
	else if (c >= 97 && c <= 1220)
		result = 1;

	return(result);
}
