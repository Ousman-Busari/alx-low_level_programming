#include "main.h"

/**
 * _strcmp - compares two strins
 * @s1: first string
 * @s2: second string
 *
 * Return: ineteger
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
