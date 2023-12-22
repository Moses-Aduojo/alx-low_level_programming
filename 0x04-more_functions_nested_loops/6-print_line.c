#include "main.h"
/**
* print_line - print a line on terminal with '_'
*@n: determin number of '_' to use
*Return: void
*/

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
