#include "main.h"
/**
* puts_half - Print second half of a string
* @str: input string
* Return: void
*/

void puts_half(char *str)
{
	int half_len = 0;
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;
	if (len % 2)
		half_len = len / 2;
	else
		half_len = (len + 1) / 2;

	for (i = half_len; i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');

}
