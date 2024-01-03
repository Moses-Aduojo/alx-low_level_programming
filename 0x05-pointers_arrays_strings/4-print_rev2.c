#include "main.h"
/**
* print_rev - Print string in reverse
* @s: string to print in reverse
* Return: void
*/

void print_rev(char *s)
{
	char temp;
	int i = 0;
	int j  = 0;

	if (s == NULL)
		return;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	while (j < i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		j++;
		i--;
	}

	i = 0;
	while (s[i] != '\0')
	{
		 _putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
