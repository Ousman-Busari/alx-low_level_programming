#include <stdio.h>
#include "main.h"

int main (void)
{
	char *str;
	int length;

	str = "My first strlen!";
	length = _strlen(str);
	printf("%d\n", length);
	return (0);
}
