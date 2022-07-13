#include <unistd.h>

/**
 * _putchar - prints the char c to standard output
 * @c: the char to print
 *
 * Return: on Success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putvhat(char c)
{
	return (write(1, &c, 1));
}
