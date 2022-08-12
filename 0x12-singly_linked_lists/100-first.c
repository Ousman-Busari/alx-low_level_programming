#include <stdio.h>

void printer(void) __attribute__((constructor));

/**
 * printer - prints a message to the stdout before main runs
 *
 * Return: nothing
 */

void printer(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
