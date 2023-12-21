#include "main.h"
/**
*_isdigit - check if a charater is digit
*@c: input character
*Return: 1 if digit, 0 otherwise
*/

int _isdigit(int c)
{
	int i = c;
	int j;

	for (j = 48; j <= 57; j++)
	{
		if (j == i)
			return (1);
	}
	return (0);
}
