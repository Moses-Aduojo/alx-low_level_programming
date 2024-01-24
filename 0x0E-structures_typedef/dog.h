
#ifndef DOG_H
#define DOG_H
#include <stddef.h>
#include <stdio.h>
/**
 * struct dog - Represents information about a dog.
 * @name: Pointer to the name of the dog (char *).
 * @age: Age of the dog (float).
 * @owner: Pointer to the owner's name (char *).
 *
 * Description: This structure contains information about a dog,
 * including its name, age, and owner's name.
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
#endif
