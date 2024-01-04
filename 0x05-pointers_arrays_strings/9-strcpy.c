#include "main.h"
/**
* _strcpy - copy a duplicate a string
* @dest: pointer to destination string
* @src: pointer to source string
* Return: pointer to destintion string
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((*dest++ = *src++) != '\0')
	{
		i++;
	}
	dest -= i;

	return (dest);

}
