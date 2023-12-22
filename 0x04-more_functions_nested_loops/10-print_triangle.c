#include "main.h"
/**
* print_triangle - print variable size triangle
* @size: determine size of the triangle
*Return: void
*/

void print_triangle(int size)
{
	int i = size;
	int j;

	if (i <= 0)
		_putchar('\n');
	else
	{
		for  (j = 0; j < i; j++)
		{
			int k;

			for (k = 0; k < (i - j -1); k++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= j; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
