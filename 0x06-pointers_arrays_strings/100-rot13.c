#include "main.h"

/**
 * rot13 - rotate in thirteen places
 * @s: the string to rotate
 *
 * Return: the pointer to the resulting string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		while ((s[i] <= 'a' && s[i] >= 'z') ||
				(s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] <= 'a' && s[i] >= 'm') ||
					(s[i] >= 'A' && s[i] >= 'M'))
				s[i] += 13;
			else
				s[i] -= 13;
		}
		i++;
	}
	return (s);
}
