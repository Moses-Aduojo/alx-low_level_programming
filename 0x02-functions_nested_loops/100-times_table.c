#include <stdio.h>
/**
*print_times_table - print n !> 15 || < 0 times table
*@n: input value
*Return: 0
*/
void print_times_table(int n)
{
	int k = n;
	int j = 0;

	if (k >= 0 && k <= 15)
	{
		while (j <= k)
		{
			int i = 0;

			while (i <= k)
			{
				printf("%3d, ", j * i);
				i++;
			}
			printf("\n");
			j++;
		}
	}
}
