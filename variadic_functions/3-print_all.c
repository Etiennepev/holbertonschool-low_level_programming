#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print char
 * @args: The number of arguments
 * @separator: separator before int
 * Return: something
 **/
void print_char(va_list args, char *separator)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_int - print int
 * @args: The number of arguments
 * @separator: separator before int
 * Return: something
 **/
void print_int(va_list args, char *separator)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * print_float - print float
 * @args: The number of arguments
 * @separator: separator before int
 * Return: something
 **/
void print_float(va_list args, char *separator)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_string - print string
 * @args: The number of arguments
 * @separator: separator before int
 * Return: something
 **/
void print_string(va_list args, char *separator)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = ("(nil)");
	printf("%s%s", separator, str);
}

/**
 * print_all - print all, char, int, float, string
 * @format: list of arguments to print
 **/

void print_all(const char * const format, ...)
{
	printer_t printers[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{'\0', NULL}
	};

va_list args;
unsigned int i = 0, j;
char *separator = "";

va_start(args, format);

while (format && format[i])
{
	j = 0;

	while (printers[j].type != '\0')
	{
		if (printers[j].type == format[i])
		{
			printers[j].function(args, separator);
			separator = ", ";
			break;
		}
		j++;
	}
	i++;
}
va_end(args);
printf("\n");
}
