#include "main.h"

/**
* _strlen_recursion - compute length of a string
* @s: string whose length is to be determine
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
	char *ptr = s;
	int len = 1;

	if (*ptr == '\0')
		return (0);
	ptr += 1;
	len = len  + _strlen_recursion(ptr);
	return (len);
}
