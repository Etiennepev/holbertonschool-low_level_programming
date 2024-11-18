#include "function_pointers.h"

/**
 * int_index - search the first index
 * @array: a pointer to an array
 * @size: number of element of the array
 * @cmp: compare the value
 * Return: some return
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size <= 0 || cmp == NULL || array == NULL)
{
return (-1);
}
for (; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
