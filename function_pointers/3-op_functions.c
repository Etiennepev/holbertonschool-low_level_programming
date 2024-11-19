#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @a: number to add
 * @b: number to add
 * Return: a + b
 **/

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - substraction
 * @a: number to sub
 * @b: number to sub
 * Return: a - b
 **/

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - multiplication
 * @a: number to mul
 * @b: number to mul
 * Return: a * b
 **/

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - division
 * @a: number to div
 * @b: number to div
 * Return: a / b
 **/

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - modulo
 * @a: number to mod
 * @b: number to mod
 * Return: a % b
 **/

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}