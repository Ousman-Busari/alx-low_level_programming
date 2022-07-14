#include "main.h"

/**
 * string_toupper - converts letters of a string to uppercase
 * @str: the input string
 *
 * Return: pointer to the resulting string
 */

char *string_toupper(char *str)
{
	char *result = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
			str++;
		} else
			str++;
	}
	return (result);
}
