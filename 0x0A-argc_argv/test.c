#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	char *s = "95";
	printf("%d\n", isdigit(s[1]));
}
