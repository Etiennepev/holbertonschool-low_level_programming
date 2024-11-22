#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer - Struct of printer
 * @type: The type of arguments, c, i, f, s.
 * @function: The pointer to the function who print the type
 **/
typedef struct printer
{
	char type;
	void (*function)(va_list args, char *separator);
} printer_t;

#endif
