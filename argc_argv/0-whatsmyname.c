#include <stdio.h>

/**
 * main - print a name of the program
 * @argv: array containing the arg
 * @argc: the number of arg
 */

int main (int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
