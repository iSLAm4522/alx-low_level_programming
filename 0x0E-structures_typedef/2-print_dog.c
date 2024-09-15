#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dog - Prints a struct dog
 * @d: Pointer to a struct dog
 *
 * Description: This function prints the elements of the struct dog.
 * If any element of the struct is NULL, it prints (nil) instead of the
 * corresponding value. If the struct pointer itself is NULL,
 * nothing is printed.
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("Name: %s\n", (d->name != NULL) ? d->name : "nil");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "nil");
}
