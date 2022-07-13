#include <stdio.h>
#include "main.h"

int main(void)
{
	int n = 20;
	printf("n = %d\n", n);
	int *pn = &n;

	reset_to_98(pn);
	printf("n = %d\n", n);
}
