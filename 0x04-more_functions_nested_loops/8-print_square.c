#include "main.h"
/**
* print_square - print sqaure with n number of '#'
* @size: number of '#' to use
* Return: void
*/

void print_square(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			int j;

			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
