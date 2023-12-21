#include <stdio.h>
/**
*times_table - print 9 times table
*Return: void
*/
void times_table(void)
{
	int j = 0;

	while (j <= 9)
	{
		int i = 0;

		while (i <= 9)
		{
			if (i < 9)
			{
				printf("%2d, ", j * i);
			} else
			{
				printf("%2d", j * i);
			}
			i++;
		}
		printf("\n");
		j++;
	}
}
