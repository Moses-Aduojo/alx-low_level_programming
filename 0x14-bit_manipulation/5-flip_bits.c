#include "main.h"

/**
 * flip_bits - find the number of bits you would need to flip to
 * get from one number to another
 * @n: the original number
 * @m: number converted to
 * Return: number of bits you would need to flip to
 * get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differing_bit = n ^ m;
	unsigned int count = 0;

	while (differing_bit)
	{
		differing_bit &= (differing_bit - 1);
		count++;
	}
	return (count);
}
