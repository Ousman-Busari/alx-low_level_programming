#include "main.h"
#include <stdio.h>

/**
 * _strchr - return the first occurence of a char
 * @s: the string to search
 * @c: the charcaters being searched for
 * Return: pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++;
}
if (c == *s)
return (s);
return (NULL);
}
