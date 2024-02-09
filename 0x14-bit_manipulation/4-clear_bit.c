#include "main.h"
#include <limits.h>
/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @n: a number whose its bit at any given index is set to 0
 * @index: the given positional index
 * Return: 1 on success -1 if it fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8) || *n > ULONG_MAX)
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}
