#include <stdio.h>
#include "main.h"
/**
*main - Entry point
*
*Return: Always (0) success
*/

int main(void)
{
	char *C = "_putchar";

	while (*C != '\0')
	{
		_putchar(*C);
		C++;
	}
	_putchar('\n');
	return (0);
}
