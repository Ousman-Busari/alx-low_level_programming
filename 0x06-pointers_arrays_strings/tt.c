#include <stdio.h>
#include "main.h"
#include <limits.h>

int main(void)
{
	printf("%d\n", INT_MIN);
	print_number(INT_MIN);
	_putchar('\n');
	print_number(402);
	_putchar('\n');
	print_number(1024);
	_putchar('\n');
	print_number(0);
	_putchar('\n');
	print_number(-98);
	_putchar('\n');
	return (0);
}
