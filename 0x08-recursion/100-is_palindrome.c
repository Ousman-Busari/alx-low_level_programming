#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int cmp_char(char *s, int len);

/**
 *_strlen_recursion - determines the length of the string s
 * @s: the input string
 * Return: the length of string s
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the input string
 *
 * Return: 1 if it's a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (cmp_char(s, len));
}

/**
 * cmp_char - comapre characters at different position
 * @s: the input string
 * @len: position of the character to compare
 *
 * Return: reversed string, one char at a time
 */

int cmp_char(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
		return (cmp_char(s + 1, len - 2));
       	return (0);
}
