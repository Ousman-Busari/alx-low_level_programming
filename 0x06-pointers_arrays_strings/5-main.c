#include <stdio.h>
#include "main.h"

int main(void)
{
	char str[] = "Hello! thEre_";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s\n", str);
	printf("%s\n", ptr);
	return (0);
}
