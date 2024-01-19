#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenate n byte from source string to dest
 * string
 * @s1: destination string
 * @s2: source string
 * @n: number of byte to take from n
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr, *str1, *str2;


	str1 = s1;
	str2 = s2;
	if (str1 == NULL)
		str1 = "";
	if (str2 == NULL)
		str2 = "";
	ptr = malloc((strlen(str1) + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < strlen(str1); i++)
	{
		ptr[i] = str1[i];
	}

	for (j = 0; j < n && str2[j] != '\0'; j++)
	{
		ptr[i] = str2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
