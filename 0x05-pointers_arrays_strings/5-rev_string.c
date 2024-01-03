#include "main.h"
/**
* rev_string - Print string in reverse
* @s: string to print in reverse
* Return: void
*/

void rev_string(char *s)
{
	int i = 0; /*size_t is preferable*/
	int j;
	int k;
	char temp;

	while (s[i] != '\0')
		i++; /*length of s*/

	for (j = 0, k = i - 1; j < k; j++, k--)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
	}
}
