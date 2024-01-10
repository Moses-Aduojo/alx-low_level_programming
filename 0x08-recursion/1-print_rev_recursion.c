#include "main.h"

/**
* _print_rev_recursion - print string in reverse with recursion
* @s: string to be printed in reverse
* Return: void
*/
void _print_rev_recursion(char *s)
{
	char *ptr = s;

	if (*ptr == '\0')
	{
		_putchar('\n');
		return;
	}
	ptr += 1;
	_print_rev_recursion(ptr);
	ptr -= 1;
	_putchar(*ptr);

}
