#include "main.h"

/**
*print_last_digit - Print last digit of a number
*@n: number whose last digit is to be printed
*Return: last digit
*/

int print_last_digit(int n)
{
	int i = n;
	int last_digit;

	if (i == INT_MIN)
	{
		last_digit = 8;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	if (i < 0)
		i *= -1;

	last_digit = i % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
