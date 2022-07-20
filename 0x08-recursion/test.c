#include <stdio.h>

int main(void)
{
	char *s = "";
	printf("size of s = %ld\n", sizeof(s));
	printf("%c", --s);
	return (0);
}
