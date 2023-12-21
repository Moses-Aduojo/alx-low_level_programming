#include <stdio.h>

void times_table(void)
{
	int j = 0;

	while (j <= 9)
	{
		int i = 0;

		while (i <= 9)
		{
			printf("%2d, ", j*i);
			i++;
		}
		printf("\n");
		j++;
	}
}
