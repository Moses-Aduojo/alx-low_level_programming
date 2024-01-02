#include "main.h"
/**
* _strlen - iterate through a string by pointer
* @s: pointer to the string
* Return: length of the string
*/

int _strlen(char *s)
{
	int len = 0;

	while(*(s++) != '\0')
		len++;
	return (len);
}
