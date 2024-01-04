#include "main.h"
/**
* _strcat - concatinate two string: distanatio and source string
* @dest: pointer to destinstion string
* @src: pointer to source string
* Return: pointer to destination string
*/

char *_strcat(char *dest, char *src)
{

	while (*src++ != '\0')
		;
	while (*dest++ != '\0')
		*src++ = *dest++;
	*src++ = '\0';
	return (src);
}
