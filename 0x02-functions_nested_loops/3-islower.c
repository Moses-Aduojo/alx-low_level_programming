#include "main.h"
/**
*_islower - Check if an input char is in lowercase
*@c: the input character to be checked
*Return: 1 if the character is lowercase, 0 otherwise
*/

int _islower(int c)
{
	char s = c;

	if (s >= 'a' && s <= 'z')
		return (1);

	return (0);
}
