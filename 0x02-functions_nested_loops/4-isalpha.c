#include "main.h"

/**
 * _isalpha - determine alphabet
 * @c: paramter
 * Description
 * Return: 1 or 0 based on condiotion
 */

int -isalpha(int c)
{
	int result;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		result = 1;
	else
		result = 0;
	returm (result);
}
