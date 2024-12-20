#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - do operations
 * @argc: count arguments
 * @argv: numbers of arguments
 * Return: 98, 99 or 100
 **/

int main(int argc, char *argv[])
{
int num1 = 0, num2 = 0;
int (*operator)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = get_op_func(argv[2]);

if (operator == NULL)
{
printf("Error\n");
exit(99);
}
printf("%d\n", operator(num1, num2));
return (0);
}
