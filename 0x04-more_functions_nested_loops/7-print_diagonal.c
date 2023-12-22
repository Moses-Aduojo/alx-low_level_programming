#include "main.h"
/**
* print_diagonal - Print diagonal with '\'
* @n: number of '\' to use
* Return: void
*/

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int j;

		for (j = 0; j < n; j++)
		{
			int i;

			for (i = 0; i <= j; i++)
			{
				if (i == j)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
