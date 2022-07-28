#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of characters to add to s1 from s2
 *
 * Return: pointer to the concatenated string or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con_s, *s1_initial, *s2_initial;
	unsigned int i, lens1, lens2;

	i = lens1 = lens2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_initial = s1, s2_initial = s2;

	while (*s1++)
		lens1++;

	while (*s2++)
		lens2++;

	s1 = s1_initial, s2 = s2_initial;
	if (n >= lens2)
		n = lens2;

	con_s = malloc(sizeof(char) * (lens1 + n + 1));
	if (con_s == NULL)
		return (NULL);

	for (; i <= lens1 && *s1; i++)
		con_s[i] = *s1++;
	for (; i < (lens1 + n) && *s2; i++)
		con_s[i] = *s2++;
	con_s[i] = '\0';
	return (con_s);
}
