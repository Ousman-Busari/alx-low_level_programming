#include <stdio.h>

int main(void)
{
	char *str = "Hello there";

	while(*str)
	{
		printf("%d, ", *str);
		str++;
	}
	return (0);
}
