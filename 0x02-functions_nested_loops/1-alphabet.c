#include "main.h"
/**
*print_alphabet - Print alphabet in lowercase
*
*Return: void
*/

void print_alphabet(void)
{
	char s = 'A';

	while (s <= 'Z')
	{
		_putchar(s - 'A' + 'a');
		s++;
	}
	_putchar('\n');
}
