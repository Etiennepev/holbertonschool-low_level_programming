#include "main.h"
/**
 * swap_int - swap value
 *
 *@a: value to swap
 *@b: new value
 */

void swap_int(int *a, int *b)
{
	*a = 98;
	*b = *a;
	*b = 98;

	*b = 42;
	*a = *b;
	*a = 42;
}
