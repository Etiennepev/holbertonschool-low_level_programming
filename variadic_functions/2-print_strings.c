#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @n: The number of arguments
 * @separator: use to separate char
 * Return: nothing
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list args;

va_start(args, n);
	for (; i < n; i++)
	{
	char *str = (va_arg(args, char*));

	if (str == NULL)
		{
		printf("(nil)");
		}
	else
		printf("%s", str);

	if (separator != NULL && i != n - 1)
	{
		printf("%s", separator);
	}
	}
	printf("\n");
	va_end(args);
}
