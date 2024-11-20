#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function of operation
 * @s: yeah
 * Return: something
 **/
int (*get_op_func(char *s))(int, int)
{
int i = 0;

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

while (ops[i].op != NULL)
{
if (ops[i].op[0] == s[0] && s[1] == '\0')
return (ops[i].f);
i++;
}
return (NULL);
}
