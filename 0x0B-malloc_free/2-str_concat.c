#include "main.h"

/**
 * str_concat - concatenate two string
 * @s1: destination string
 * @s2: destination string
 * Return: pointer to the destination string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1, len2;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < len2; j++)

	result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
