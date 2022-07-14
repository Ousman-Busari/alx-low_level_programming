#include "main.h"

/**
 * string_toupper - converts letters of a string to uppercase
 * @str: the input string
 *
 * Return: pointer to the resulting string
 */

char *string_toupper(char *str)
{
	int i;
	char c;

	while(*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			str++;
		else if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
			str++;
		}
	}
}
