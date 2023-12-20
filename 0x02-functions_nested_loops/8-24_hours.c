#include <stdio.h>
/**
*jack_bauer - print every sec, min, and hrs in a day
*Return: void
*/

void jack_bauer(void)
{
	int i = 0;

	while (i < 24)
	{
		int j = 0;

		while (j < 60)
		{
			printf("%02d:%02d\n", i, j);
			j++;
		}
		i++;
	}

}
