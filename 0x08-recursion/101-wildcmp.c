#include "main.h"

/**
 * wildcmp - compare two strings
 * @s1: the first string
 * @s2: the secodns tring
 * Return: 1 if they re the same, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*' && (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1)))
		return (1);
	if (*s2 == '*' && *(s1 + 1) && *s2)
		return (0);
	return (0);
}
