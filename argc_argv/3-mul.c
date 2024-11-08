#include <stdio.h>
#include <stdlib.h>
/**
 * main - print a name of the program
 *
 * @argv: array containing the arg
 * @argc: the number of arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
	printf("%d\n", (atoi(argv[1]) * atoi(argv[1])));
	}
	else if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
