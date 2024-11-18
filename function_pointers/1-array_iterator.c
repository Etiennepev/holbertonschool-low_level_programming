#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - exec on each element of an array
 * @array: pointer to the integers array
 * @size: size of the array
 * @action: pointer who exec each element of an array
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

if (action != NULL)
{
if (array != NULL)
{
for (; i < size; i++)
{
action(array[i]);
}
}
}
