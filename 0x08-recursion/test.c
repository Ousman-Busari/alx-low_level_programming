#include <stdio.h>

int main(void)
{
	char *s;

	s = rev_string("let's do it");
	printf("content of s = %s\n", s);
	return (0);
}

int rev_string(char *s)
{
	if (*s)
	{
		rev_string(s + 1);
		_putchar(s);
	}
}
