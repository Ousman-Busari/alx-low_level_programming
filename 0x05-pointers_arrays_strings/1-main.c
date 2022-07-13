#include <stdio.h>
#include "main.h"

int main(void)
{
	int a = 10, b = 15;
	int *p1 = &a, *p2 = &b;

	printf("Before swapping, a = %d, and b = %d\n", a, b);
	swap_int(p1, p2);
	printf("After swapping, a = %d, and b = %d\n", a, b);
	return (0);
}
