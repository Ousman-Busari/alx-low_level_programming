#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: the searched string
 * @accept: the searching string
 * Return: pointer to the resulting string
 */

char *_strpbrk(char *s, char *accept)
{
	char *initial = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
		accept = initial;
	}
	return (NULL);
}
