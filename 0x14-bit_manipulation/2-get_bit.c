#include "main.h"
#include <limits.h>

/**
 * get_bit - find the value of a bit at a given index.
 * @n: number whose bit at the given idex is to find
 * @index: position index of the bit in the number
 * Return: the value of the found bit at the given index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > (sizeof(unsigned long int) * 8) || n > ULONG_MAX)
		return (-1);

	while (i <= index)
	{
		if (i == index)
			return (n & 1);
		n >>= 1;
		i++;
	}
	return (-1);
}
