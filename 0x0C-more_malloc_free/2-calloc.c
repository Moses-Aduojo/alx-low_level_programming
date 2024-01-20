#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of element of the resulting array
 * @size: size of each element of the resulting array
 * Return: pointer the resulting array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t array_size = nmemb * size;
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(array_size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < array_size; i++)
	{
		*((char *)ptr + i) = 0;
	}
	return (ptr);

}
