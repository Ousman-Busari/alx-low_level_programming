#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: where to look fro the string
 * @needle: the string being searched for
 * Return: char pointer to the resultinh string
 */

char *_strstr(char *haystack, char *needle)
{
	char *hay_initial, *needle_initial = needle;

	while (*haystack)
	{
		hay_initial = haystack;
		while (*haystack == *needle)
			haystack++, needle++;
		if (*needle == '\0')
			return (hay_initial);
		needle = needle_initial;
		haystack = ++hay_initial;
	}
	return (NULL);
}
