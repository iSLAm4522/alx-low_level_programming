#include "dog.h"
#include <stddef.h>
/**
* init_dog - Initializes a variable of type struct dog
* @d: Pointer to the struct dog to be initialized
* @name: Pointer to a string representing the name of the dog
* @age: Float representing the age of the dog
* @owner: Pointer to a string representing the owner's name
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	return;

d->name = name;
d->age = age;
d->owner = owner;
}
