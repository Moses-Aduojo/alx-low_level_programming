#include "main.h"
/**
*print_alphabet_x10 - Prints the alphabet 10 times, each on a new line.
*/

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char s = 'A';

		while (s <= 'Z')
		{
			_putchar(s - 'A' + 'a');
			s++;
		}
		_putchar('\n');
		i++;
	}
}
