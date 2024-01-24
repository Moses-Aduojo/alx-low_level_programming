#include "dog.h"

/**
 *init_dog - initializes the variable of struct dog
 * @d: pointer to the dog struct
 * @name: name member
 * @age: age member
 * @owner: owner member
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
