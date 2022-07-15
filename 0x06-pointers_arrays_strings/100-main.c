#include <stdio.h>
#include "main.h"

int main(void)
{
	char *ptr;
	char *s = "Talk is cheap. Show the code ([#Cisfun, #CisAwesome])\n";

	ptr = rot13(s);
	printf("%s\n", ptr);
	return (0);
}
