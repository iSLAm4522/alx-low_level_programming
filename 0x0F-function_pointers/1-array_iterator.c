#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @action: Pointer to the function to be executed on each array element.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;
if (array != NULL && action != NULL)
while (i < size)
action(array[i++]);
}
