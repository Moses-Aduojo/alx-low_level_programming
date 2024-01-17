#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of char of unknon size and initialize it
 * @size: size of the array
 * @c: char to use in initializing the array
 * Return: pointer to the allocated array or NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(c));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
