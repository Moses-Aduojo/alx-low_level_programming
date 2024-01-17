#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char*)malloc(size * sizeof(c));
	if (ptr == NULL)
		return (NULL);
	ptr[0] = c;
	return (ptr);
}
