#include "main.h"
/**
* main - Entry point, print 1 - 100, fizz, buzz,\
i* and fizzbuzz for multiple of 3, 5, 3 and 5 respectivly
* Return: Always (0) success
*/

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		i++;
	}
	putchar('\n');
	return (0);
}
