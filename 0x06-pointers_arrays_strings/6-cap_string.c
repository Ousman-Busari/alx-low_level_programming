#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: the input string
 *
 * Return: the resulting string
 */

char *cap_string(char *str)
{
	int i = 0, j, k;
	char *result = str;
	char separator[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (str[i])
	{
		j = k = 0;
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		for (; j < 13; j++)
		{
			if (str[i] == separator[j])
				k = 1;
		}
		if (k && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		i++;
	}
	return (result);
}

