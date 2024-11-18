#include <stdlib.h>
#include "function_pointers.h"


/**
 * print_name- a fonction to print a name
 * @name: Pointer to an array
 * @f: pointer to the function to print a name
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
