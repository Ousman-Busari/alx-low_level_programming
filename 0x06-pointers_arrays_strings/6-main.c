#include <stdio.h>
#include "main.h"

int main(void)
{
	char str[] = "expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s\n", str);
	printf("%s\n", ptr);
	return (0);
}
