#include "main.h"

/**
* _strspn - matches character in initial segment of string s with
* string 'accept', and caculate number of matches until the first mismatch
* @s: pointer to string s
* @accept: pointer to string 'accept'
* Return: number of matches
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter;
	int k = 1;

	counter = 0;
	while (*s)
	{
		if (k == 0)
			return (counter);
		else
		{
			while (*accept != '\0')
			{
				if (*accept == *s)
				{
					counter++;
					k = 1;
					break;
				}
				else if (k == 1)
					break;
				else
				{
					k = 0;
					break;
				}
				accept++;
			}
		}
		s++;
	}
	return (counter);
}
