#include <stdio.h>

/**
 * main - print a name of the program
 *
 * @argv: array containing the arg
 * @argc: the number of arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
