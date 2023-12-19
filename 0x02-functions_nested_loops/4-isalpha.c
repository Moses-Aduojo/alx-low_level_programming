#include "main.h"
/**
*_isalpha - Check if an input char is in is alphabet
*@c: the input character to be checked
*Return: 1 if the character is alphabet, 0 otherwise
*/

int _isalpha(int c)
{
	char s = c;

	if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z'))
		return (1);

	return (0);
}
