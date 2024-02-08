#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: number whose binary representation is to be find
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n > 0)
	{
		i = (n & 1) + '0';
		n >>= 1;
		if (n == 0 && i)
		{
			_putchar(i);
			return;
		}
		print_binary(n);
		_putchar(i);
	}
}
