#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of own main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 or 2 on fail, 0 on success
 */
int main(int argc, char *argv[])
{
	int im_after, i = 0;
	unsigned char *func_ptr;

	func_ptr = (unsigned char *)main;
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	im_after = atoi(argv[1]);
	if (im_after < 0)
	{
		printf("Error\n");
		exit(2);
	}
	if (im_after > 0)
	{
		while (i < (im_after - 1))
			printf("%02x ", func_ptr[i++]);
		printf("%02x\n", func_ptr[i]);
	}
	return (0);
}
