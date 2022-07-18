#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: the searched string
 * @accept: the searching string
 * Return: pointer to the resulting string
 */

char *_strpbrk(char *s, char *accept)
{
	char *initial = accept, *result;
	int i_o;

	while (*s)
	{
		i_o = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				i_o = 1;
				result = s;
				break;
			}
			accept++;
		}
		s++;
		accept = initial;
		if (i_o || *s = '\0')
			break;
	}
	return (result);
}
