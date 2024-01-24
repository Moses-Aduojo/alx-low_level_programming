#include "dog.h"
/**
 * print_dog - print struct dog
 * @d: pointer to dog struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name: %s\nage: %f\nowner: %s\n", d->name ? d->name : "(nil)", \
		d->age, d->owner ? d->owner : "(nill)");
	}
	else
		printf("%s\n", "nill");
}
