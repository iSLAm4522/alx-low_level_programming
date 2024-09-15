#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog struct.
 * @name: Pointer to a string representing the dog's name.
 * @age: The dog's age (in float).
 * @owner: Pointer to a string representing the dog's owner.
 *
 * Return: Pointer to the new dog_t struct, or NULL if it fails.
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
char *name_copy, *owner_copy;

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
name_copy = malloc(strlen(name) + 1);
if (name_copy == NULL)
{
free(dog);
return (NULL);
}
strcpy(name_copy, name);
owner_copy = malloc(strlen(owner) + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(dog);
return (NULL);
}
strcpy(owner_copy, owner);

dog->name = name_copy;
dog->age = age;
dog->owner = owner_copy;
return (dog);
}
