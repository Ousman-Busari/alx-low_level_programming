#include <stdio.h>

int main(void)
{
	char *s2 = "";
	while (*s2++)
		printf("1");
	printf("while not executed\n");
	return (0);
}
