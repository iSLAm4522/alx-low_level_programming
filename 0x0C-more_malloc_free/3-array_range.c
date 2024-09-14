#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (included).
 * @max: The maximum value (included).
 *
 * Return: Pointer to the newly created array.
 * If min > max, returns NULL.
 * If malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
int *ptr;
int i = 0;

if (min > max)
return (NULL);
ptr = malloc((max - min + 1) * sizeof(int));
if (ptr == NULL)
return (NULL);
while (min <= max)
ptr[i++] = min++;
return (ptr);
}
