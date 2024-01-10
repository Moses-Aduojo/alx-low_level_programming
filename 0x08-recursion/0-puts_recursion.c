#include "main.h"

/**
* _puts_recursion - print string followed by a new line
* @s: pointer to the string to print
* Return: void
*/
void _puts_recursion(char *s)
{
	char *ptr = s;

	if (*ptr == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*ptr);
	ptr += 1;
	_puts_recursion(ptr);
}
