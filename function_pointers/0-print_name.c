#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name- a fonction to print a name
 * @name: Pointer to an array
 * @f: pointer to the function to print a name
 * Return: Nothing
 **/

void print_name(char *name, void (*f)(char *))
{
    f(name);
}
