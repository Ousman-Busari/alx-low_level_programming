#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concats two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the strings concated
 */

char *str_concat(char *s1, char *s2)
{
	char *result, *s1_initial, *s2_initial;
	int i, len;

	i = len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_initial = s1, s2_initial = s2;

	while (*s1++)
		len++;

	while (*s2++)
		len++;

	s1 = s1_initial, s2 = s2_initial;
	result = malloc(sizeof(char) * (len + 1));

	if (result == NULL)
		return (NULL);

	while (*s1)
	{
		result[i] = *s1++;
		i++;
	}

	while (*s2)
	{
		result[i] = *s2++;
		i++;
	}

	result[i] = '\0';
	return (result);
}
