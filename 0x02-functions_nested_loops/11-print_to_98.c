#include <stdio.h>
/**
*print_to_98 - Print natural number from given number n to 98
*@n: starting point
*Return: void
*/

void print_to_98(int n)
{
	int i = n;

	if (i < 98)
	{
		while (i < 98)
		{
			printf("%d, ", i);
			i++;
		}
		printf("%d\n", 98);
	} else if (i > 98)
	{
		while (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
		printf("%d\n", 98);
	}
	else
		printf("%d\n", 98);
}
