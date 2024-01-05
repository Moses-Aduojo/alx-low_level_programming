#include "main.h"

/**
* leet - encodes a string into 1337
* @string:pointer to string to encode
* Return: pointer to the encoded string
*/
char *leet(char *string)
{
	char *str = string;
	char *arr = "AEOTLaeotl";
	char *arr2 = "43079";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == arr[j] || str[i] == arr[j + 5])
				str[i] = arr2[j];
		}
	}
	return (string);
}
