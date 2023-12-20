#include <stdio.h>


int sum_of_multiples(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		i++;
	}
	printf("sum: %d\n", sum);
	return (sum);
}
