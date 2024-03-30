#include "main.h"

/**
 * _strcat - concatenate two strings: destination and source string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	char *prt = dest;

	while (*prt != '\0')
		prt++;

	while (*src != '\0')
	{
		*prt++ = *src++;
	}
	*prt = '\0';
	return (dest);
}
