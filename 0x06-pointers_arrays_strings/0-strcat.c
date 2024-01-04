#include "main.h"
/**
* _strcat - concatinate two string: distanatio and source string
* @dest: pointer to destinstion string
* @src: pointer to source string
* Return: pointer to destination string
*/

char *_strcat(char *dest, char *src)
{
	/*char *prt = dest;*/

	while (*dest++ != '\0')
		;
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest++ = '\0';
	return (dest);
}
