#include <stdio.h>

/**
*main - Entry point
*
*Return: Always (0) success
*/

int main(void)
{
	int digit;
	char c;

	digit = 0;
	c = 'a';

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}

	while (c  <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
