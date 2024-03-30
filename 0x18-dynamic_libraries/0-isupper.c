#include "main.h"
/**
*_isupper - Check for uppercase character
*@c: inputed character
*Return: 1 if upper case, 0 otherwise
*/

int _isupper(int c)
{
	int i = c;
	int j;

	for (j = 'A'; j <= 'Z'; j++)
	{
		if (i == j)
			return (1);
	}
	return (0);
}
