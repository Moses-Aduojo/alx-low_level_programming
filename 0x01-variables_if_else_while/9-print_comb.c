#include <stdio.h>
/**
*main - Entry point
*
*Return: Always (0) success
*/

int main(void)
{
	int digit;

	digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		putchar(',');
		putchar(' ');
		digit++;
	}
	putchar('\n');
	return (0);
}

