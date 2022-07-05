#include <unitstd.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;

	char word[7] = "_putchar";
	for (i  = 0; i < 8; i++)
		_putchar(word[i]);

	_putchar('\n');
	return(0);
}
