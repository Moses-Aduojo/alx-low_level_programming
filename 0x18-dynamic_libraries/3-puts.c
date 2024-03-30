#include "main.h"
/**
* _puts - Print a string to the standard output followed by new line
* @str: pointer to the string
* Return: void
*/

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
