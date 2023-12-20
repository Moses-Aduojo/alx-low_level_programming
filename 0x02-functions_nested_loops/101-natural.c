#include <stdio.h>

/**
*main - Entry point
*sum_of_multiples - print sum of multiples of 3\
*and 5 below 1024
*Return: Always (0) success
*/

int sum_of_multiples(void);


int main(void)
{
	sum_of_multiples();
	return (0);
}

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
	printf("%d\n", sum);
	return (sum);
}
