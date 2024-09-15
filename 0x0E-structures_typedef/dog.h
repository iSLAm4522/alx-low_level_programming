#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure to store information about a dog
 * @name: Pointer to a character string representing the dog's name
 * @age: A float representing the dog's age
 * @owner: Pointer to a character string representing the name of the
 * dog's owner.
 */

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
