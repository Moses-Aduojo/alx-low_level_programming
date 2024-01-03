#include "main.h"
/**
* print_rev - Print string in reverse
* @s: string to print in reverse
* Return: void
*/

void print_rev(char *s)
{
	int i = 0; /*size_t is preferable*/
	int j;
	int k;

	while (s[i] != '\0')
		i++; /*length of s*/

	for (j = 0, k = i - 1; j < i; j++, k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
