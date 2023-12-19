#include "main.h"

/**
*print_sign - Determine sing of n; print (+) if n \
*is pos, (-) if neg and (0) if zero
*@n: input num whose sign is determined
*Return:  1 if n is pos, -1 if neg and (0) if zero
*/

int print_sign(int n)
{
	int i = n;

	if (i > 0)
	{
		_putchar('+');
		return (1);
	}

	if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
