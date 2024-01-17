#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: string to be duplicated
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int len = 0;
	char *duplicate;
	/**
	 * without the line below the code will return invalid pointer
	 * find out why
	 */
	char *string = str;

	if (string == NULL)
		return (NULL);

	/*printf("%p\n", string);*/
	while (*string != '\0')
	{
		len++;
		string++;
	}
	len++;
	duplicate = (char *)malloc(len * sizeof(char));
	/*printf("%p\n", duplicate);*/
	if (duplicate == NULL)
	{
		printf("Error: malloc failed\n");
		return (NULL);
	}
	while ((*duplicate++ = *str++) != '\0')
		;
	*duplicate = '\0';
	duplicate = duplicate - len;
	/*printf("%p\n", duplicate);*/
	return (duplicate);
}
