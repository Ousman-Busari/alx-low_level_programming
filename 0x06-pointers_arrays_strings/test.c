#include <stdio.h>

int main(void)
{
	char *s = "Hello     ";
	int len = 0, i = 0i;

	while(*(s + i))
	{
		i++;
		len++;
	}
	printf("%c is at 0, and %c is at 10\n", s[0], s[8]);
	printf("%d, \n", len);
}
