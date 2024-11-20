#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @n: yeah
 * @separator: use to separate numbers
 * Return: nothing
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list args;

va_start(args, n);
for (; i < n; i++)
{
if (separator != NULL && i != n - 1)
{
printf("%d%s", va_arg(args, int), separator);
}
else
printf("%d", va_arg(args, int));
}
printf("\n");
va_end(args);
}
