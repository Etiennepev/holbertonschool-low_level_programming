#include "main.h"
/**
 * swap_int - swap value
 *
 *@a: value to swap
 *@b: new value
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
