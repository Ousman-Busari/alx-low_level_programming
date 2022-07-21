#include "main.h"
int cmp_char(char *s, int len);

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
 * Return: reversed string, one char at a time
 */

int cmp_char(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s == *(s + len - 1))
		cmp_char(s + 1, len - 2);
	else
		return (0);
}
