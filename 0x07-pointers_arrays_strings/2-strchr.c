#include "main.h"

/**
* _strchr - search for a character in a string
* @s: pointer to the given string
* @c: character to search for
* Return: pointer to the position of first occurence of c if
* if found
*/
char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr++ != '\0')
	{
		if (*ptr == c)
			return (ptr);
	}
	return (NULL);
}
