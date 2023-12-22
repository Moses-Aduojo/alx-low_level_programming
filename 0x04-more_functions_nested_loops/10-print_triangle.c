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

	for  (j = 0; j < i; j++)
	{
		int k;
		/*int n = j*/

		for (k = 0; k < (i - j); k++)
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
