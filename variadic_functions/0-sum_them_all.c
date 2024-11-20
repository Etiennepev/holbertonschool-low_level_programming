#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - the sum
 * @n: yeah
 * Return: something
 **/

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i = 0;
va_list args;

if (n == 0)
{
return (0);
}

va_start(args, n);
for (; i < n; i++)
{
sum += va_arg(args, unsigned int);
}
va_end(args);
return (sum);
}
