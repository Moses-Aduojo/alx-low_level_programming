#include "main.h"
/**
*print_most_numbers - print 0 - 9 exempting 0 & 4
*
*Return: void
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			;
		else
			_putchar(i + '0');
	}
	_putchar('\n');
}
