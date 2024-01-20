#include "main.h"

/**
 * array_range - create array of range of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the created array
 */
int *array_range(int min, int max)
{
	int array_size = (max - min + 1) * sizeof(int);
	int *ptr;
	int i, j;

	if (min > max)
		return (NULL);

	ptr = malloc(array_size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0, j = min; i < array_size && j <= max; i++, j++)
	{
		*(ptr + i) = j;
	}
	return (ptr);

}
