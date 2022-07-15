#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: the input string
 *
 * Return: the resulting string
 */

char *cap_string(char *str)
{
	int i;
	char *result = str;
	char separator[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };

	while (*str)
	{
		int j = 0, k = 0;

		for (; j < 13; j++)
		{
			if (*str == separator[j])
				k = 1;
		}
		if (k && (*(str + 1) >= 'a' && *(str + 1) <= 'z'))
			*(str + 1) -= 32;
		str++;
	}
	return (result);
}
