#include <stdio.h>
/**
*print_times_table - Print n times table(n != neg || > 15)
*Return: void
*/

void print_times_table(int n)
{
	int k = n;

	k = 0;
	while (k >= 0 && k <= 15)
	{
		int j = 0;

		while (j <= k)
		{
			int i = 0;

			while (i <= k)
			{
				printf("%3d, ", j*i);
				i++;
			}
			printf("\n");
			j++;
		}
		printf("\n");
		k++;
	}
}
