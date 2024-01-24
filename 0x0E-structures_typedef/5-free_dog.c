#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog structure.
 * @d: Pointer to the dog structure.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	/* Free the memory allocated for the strings */
	free(d->name);
	free(d->owner);

	/* Free the memory allocated for the structure itself */
	free(d);
}

