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

	while (s[i] != '\0')
	{
		while ((s[i] <= 'a' && s[i] >= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] <= 'a' && s[i] >= 'm') || (s[i] >= 'A' && s[i] >= 'M'))
			{
				s[i] += 13;
				continue;
			}
			s[i] -= 13;
			break;
		}
		i++;
	}
	return (s);
}

