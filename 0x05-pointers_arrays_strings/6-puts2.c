#include "main.h"
/**
* puts2 - Print string in reverse
* @str: string from which to print alternate char
* Return: void
*/

void puts2(char *str)
{
	int i = 0;
	int j;

	while (*str++ != '\0')
		i++;
	i++;
	str -= i; /*reset pointer to the begining of the string*/

	for (j = 0; j < i; j += 2)
		_putchar(str[j]);
	_putchar('\n');
}
